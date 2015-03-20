#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;

vector <ll> arDataTable;
vector <ll> arMultipleIndexTree;
ll n, k;
char cOrder[1];
ll a, b;
ll nBottom;
ll mul;

void makeMultipleIndexTree(ll nTotal)
{
	while (nTotal > 0)
	{
		for (ll i = nTotal / 2; i < nTotal; i++)
		{
			arMultipleIndexTree[i] = arMultipleIndexTree[i * 2] * arMultipleIndexTree[i * 2 + 1];
		}
		nTotal /= 2;
	}
}

void updateData(ll idx, ll chNum)
{
	arMultipleIndexTree[idx] = chNum;

	while (idx > 0)
	{
		if (idx % 2 == 0)
			arMultipleIndexTree[idx / 2] = arMultipleIndexTree[idx] * arMultipleIndexTree[idx + 1];
		else
			arMultipleIndexTree[idx / 2] = arMultipleIndexTree[idx - 1] * arMultipleIndexTree[idx];
		idx /= 2;
	}
}

void findMultiple(ll nStart, ll nEnd)
{
	mul = 1;

	while (nStart <= nEnd)
	{
		if (nStart % 2 == 1)
		{
			mul *= arMultipleIndexTree[nStart];
			nStart++;
		}
		if (nEnd % 2 == 0)
		{
			mul *= arMultipleIndexTree[nEnd];
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

	while (scanf("%lld", &n) != EOF)
	{
		scanf("%lld", &k);

		nBottom = 1;
		while (n > nBottom)
			nBottom *= 2;

		arDataTable.clear();
		arMultipleIndexTree.clear();

		arDataTable.resize(nBottom, 1);
		arMultipleIndexTree.resize(nBottom * 2, 1);

		for (ll i = nBottom; i < nBottom * 2; i++)
			scanf("%lld", &arMultipleIndexTree[i]);

		makeMultipleIndexTree(nBottom);

		while (k--)
		{
			scanf("%s", cOrder);
			scanf("%lld", &a);
			scanf("%lld", &b);

			if (cOrder[0] == 'C')
			{
				a = a + nBottom - 1;
				updateData(a, b);
			}
			else if (cOrder[0] == 'P')
			{
				a = a + nBottom - 1;
				b = b + nBottom - 1;
				findMultiple(a, b);

				if (mul > 0)
					printf("+");
				else if (mul < 0)
					printf("-");
				else
					printf("0");
			}
		}
		printf("\n");
	}
}