#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define D_MIN 10000000000
#define D_MAX 0

typedef long long ll;

vector <ll> arDataTable;
vector <ll> arMinIndexTree;
vector <ll> arMaxIndexTree;
ll n, m;
ll mmin = D_MIN;
ll mmax = D_MAX;
ll nLeft, nRight;
ll nBottom = 1;
ll cnt;

void makeMinIndexTree(ll nTotal)
{
	cnt = 0;
	while (nTotal > 0)
	{
		for (int i = nTotal / 2; i < nTotal; i++)
		{
			if (cnt < n)
			{
				arMinIndexTree[i] = arDataTable[i - nTotal / 2];
				cnt++;
			}
			else if (cnt < nBottom)
			{
				arMinIndexTree[i] = D_MIN;
				cnt++;
			}
			else
			{
				arMinIndexTree[i] = min(arMinIndexTree[i * 2], arMinIndexTree[i * 2 + 1]);
			}
		}
		nTotal /= 2;
	}
}

void makeMaxIndexTree(ll nTotal)
{
	cnt = 0;

	while (nTotal > 0)
	{
		for (int i = nTotal / 2; i < nTotal; i++)
		{
			if (cnt < n)
			{
				arMaxIndexTree[i] = arDataTable[i - nTotal / 2];
				cnt++;
			}
			else if (cnt < nBottom)
			{
				arMaxIndexTree[i] = D_MAX;
				cnt++;
			}
			else
			{
				arMaxIndexTree[i] = max(arMaxIndexTree[i * 2], arMaxIndexTree[i * 2 + 1]);
			}
		}
		nTotal /= 2;
	}
}

void findMinMax(ll nStart, ll nEnd)
{
	while (nStart <= nEnd)
	{
		if (nStart % 2 == 1)
		{
			mmin = min(mmin, arMinIndexTree[nStart]);
			mmax = max(mmax, arMaxIndexTree[nStart]);
			nStart++;
		}
		if (nEnd % 2 == 0)
		{
			mmin = min(mmin, arMinIndexTree[nEnd]);
			mmax = max(mmax, arMaxIndexTree[nEnd]);
			nEnd--;
		}
		nStart /= 2;
		nEnd /= 2;
	}
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%lld", &n);
	scanf("%lld", &m);

	while (nBottom < n)
		nBottom *= 2;

	arDataTable.resize(nBottom + 1);
	arMinIndexTree.resize(nBottom * 2);
	arMaxIndexTree.resize(nBottom * 2);

	for (ll i = 0; i < n; i++)
		scanf("%lld", &arDataTable[i]);

	makeMinIndexTree(nBottom * 2);
	makeMaxIndexTree(nBottom * 2);

	while (m--)
	{
		mmin = D_MIN;
		mmax = D_MAX;

		scanf("%lld", &nLeft);
		scanf("%lld", &nRight);

		nLeft = nLeft + nBottom - 1;
		nRight = nRight + nBottom - 1;

		findMinMax(nLeft, nRight);

		printf("%lld %lld\n", mmin, mmax);
	}
}
