#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif


	vector <int> arData;
	int m, n;
	int nSum = 0;
	int nCnt = 2;
	int nMin = 0;

	scanf("%d", &m);
	scanf("%d", &n);

	arData.resize(n + 1);

	for (int i = 2; i <= n; i++)
		arData[i] = i;

	for (int i = 2; i <= n; i++)
	{
		if (arData[i] == 0)
			continue;

		for (int j = i + i; j <= n; j += i)
			arData[j] = 0;
	}

	for (int i = 2; i <= n; i++)
	{
		if (arData[i] != 0 && arData[i] >= m && arData[i] <= n)
			nSum += arData[i];
	}

	for (int i = 2; i <= n; i++)
	{
		if (arData[i] != 0 && arData[i] >= m)
		{
			nMin = arData[i];
			break;
		}
	}
	if (nSum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", nSum, nMin);
}