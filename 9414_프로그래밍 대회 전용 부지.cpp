#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nTestcase = 0;
	ll nTotal = 0;
	ll arCost[40] = {};
	int nCnt = 0;
	int nTmp = 0;

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		nTotal = 0;
		nCnt = 0;
		memset(arCost, -1, sizeof(arCost));

		for (int i = 1; arCost[i - 1] != 0; i++)
		{
			scanf("%lld", &arCost[i]);
			nCnt++;
		}

		sort(arCost + 1, arCost + nCnt);
		reverse(arCost + 1, arCost + nCnt);

		for (int i = 1; arCost[i] != 0; i++)
			nTotal += 2 * pow(arCost[i], i);

		if (nTotal <= 5000000)
			printf("%lld\n", nTotal);
		else
			printf("Too expensive\n");
	}
}