#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int arChessTale[10][10] = {};
int arVisit[10][10] = {};
int nChessSize = 0;
int nMax = 0;
int dy[2] = {  1, 1 };
int dx[2] = { -1, 1 };

void cntBishop(int nCol, int nRow, int nCnt)
{
	if (nCol == nChessSize)
	{
		nMax = max(nMax, nCnt);
		return;
	}

	if (arVisit[nCol][nRow] == 0)
	{
		if (nRow == nChessSize - 1)
			cntBishop(nCol + 1, nRow - (nChessSize - 1), nCnt);
		else
			cntBishop(nCol, nRow + 1, nCnt);
	}
	else if (arVisit[nCol][nRow] == 1)
	{
		if (nRow == nChessSize - 1)
			cntBishop(nCol + 1, nRow - (nChessSize - 1), nCnt);
		else
			cntBishop(nCol, nRow + 1, nCnt);

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < nChessSize; j++)
			{
				int nextY = nCol + (dy[i] * j);
				int nextX = nRow + (dx[i] * j);
				if (nextY < 0 || nextY >= nChessSize || nextX < 0 || nextX >= nChessSize)
					continue;
				arVisit[nextY][nextX] = 0;
			}
		}
		if (nRow == nChessSize - 1)
			cntBishop(nCol + 1, nRow - (nChessSize - 1), nCnt + 1);
		else
			cntBishop(nCol, nRow + 1, nCnt + 1);
	}
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &nChessSize);

	for (int i = 0; i < nChessSize; i++)
	{
		for (int j = 0; j < nChessSize; j++)
		{
			scanf("%d", &arChessTale[i][j]);
			arVisit[i][j] = arChessTale[i][j];
		}
	}

	for (int i = 0; i < nChessSize; i++)
	{
		for (int j = 0; j < nChessSize; j++)
		{
			printf("%d", arVisit[i][j]);
		}
		printf("\n");
	}

	cntBishop(0, 0, 0);

	printf("%d\n", nMax);
}