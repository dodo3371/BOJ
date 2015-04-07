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

	int arData[10][10] = {};
	int nMax = 0;
	int nX = 0;
	int nY = 0;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			scanf("%d", &arData[i][j]);

			nMax = max(nMax, arData[i][j]);
		}
	}

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (arData[i][j] == nMax)
			{
				nY = i;
				nX = j;
				break;
			}
		}
	}

	printf("%d\n%d %d\n", nMax, nY, nX);
}