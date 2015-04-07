#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int n, m, k;
	int arData[301][301] = {};
	int startX, startY, endX, endY;
	int nSum = 0;

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &arData[i][j]);

	scanf("%d", &k);

	while (k--)
	{
		scanf("%d", &startX);
		scanf("%d", &startY);
		scanf("%d", &endX);
		scanf("%d", &endY);

		nSum = 0;

		for (int i = startX; i <= endX; i++)
		{
			for (int j = startY; j <= endY; j++)
			{
				nSum += arData[i][j];
			}
		}

		printf("%d\n", nSum);
	}

}