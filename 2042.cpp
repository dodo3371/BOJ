#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

vector <ll> arDataTable;
vector <ll> arSumIndexTree;
vector <ll> arMaxIndexTree;
ll n, m, k;
ll a, b, c;
ll sum;
ll nLeft, nRight;
ll nBottom = 1;
ll cnt;

void makeSumIndexTree(ll nTotal)
{
	cnt = 0;

	while (nTotal > 0)
	{
		for (int i = nTotal / 2; i < nTotal; i++)
		{
			if (cnt < n)
			{
				arSumIndexTree[i] = arDataTable[i - nTotal / 2];
				cnt++;
			}
			else if (cnt < nBottom)
			{
				arSumIndexTree[i] = 0;
				cnt++;
			}
			else
			{
				arSumIndexTree[i] = arSumIndexTree[i * 2] + arSumIndexTree[i * 2 + 1];
			}
		}
		nTotal /= 2;
	}
}

void updateData(ll idx, ll chNum)
{
	chNum -= arSumIndexTree[idx];

	while (idx > 0)
	{
		arSumIndexTree[idx] += chNum;
		idx /= 2;
	}
}

void findSum(ll nStart, ll nEnd)
{
	while (nStart <= nEnd)
	{
		if (nStart % 2 == 1)
		{
			sum += arSumIndexTree[nStart];
			nStart++;
		}
		if (nEnd % 2 == 0)
		{
			sum += arSumIndexTree[nEnd];
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
	scanf("%lld", &k);

	while (nBottom < n)
		nBottom *= 2;

	arDataTable.resize(nBottom + 1);
	arSumIndexTree.resize(nBottom * 2);

	for (ll i = 0; i < n; i++)
		scanf("%lld", &arDataTable[i]);

	makeSumIndexTree(nBottom * 2);

	for (ll i = 0; i < m + k; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);

		if (a == 1)
		{
			b = b + nBottom - 1;
			updateData(b, c);
		}
		else
		{
			sum = 0;
			b = b + nBottom - 1;
			c = c + nBottom - 1;
			findSum(b, c);
			printf("%lld\n", sum);
		}
	}
}
