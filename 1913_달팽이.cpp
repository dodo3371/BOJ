#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector < vector <int> > arData;
int nSize = 0;
int nNum = 0;
int nData = 0;
int arAdd[4][2] = { { 0, -1 }, { -1, 0 }, { 0, 1 }, { 1, 0 } };
int nY = 0;
int nX = 0;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &nSize);
	scanf("%d", &nNum);

	arData.resize(nSize, vector<int>(nSize));

	nY = 1;
	nData = 1;

	for (int i = nSize * 2 - 1; i >= 0; i--)
	{
		for (int j = 0; j < (nSize * 2 - i) / 2; j++)
		{
			nX += arAdd[i % 4][0];
			nY += arAdd[i % 4][1];

			arData[nY][nX] = nData;
			nData++;
		}
	}

	//Ãâ·Â
	for (int i = 0; i < nSize; i++)
	{
		for (int j = 0; j < nSize; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < nSize; i++)
	{
		for (int j = 0; j < nSize; j++)
		{
			if (arData[i][j] == nNum)
			{
				printf("%d %d\n", i + 1, j + 1);
				return 0;
			}
		}
	}
}