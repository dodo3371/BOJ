#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int arBingo[5][5] = {};
int arCallNum[25] = {};
int arVisit[5][5] = {};
int nLineCnt = 0;
int nNumCnt = 0;
int nTmpj = 0;
int nTmpk = 0;
int nFLag = 0;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		scanf("%d", &arBingo[i][j]);

	for (int i = 0; i < 25; i++)
		scanf("%d", &arCallNum[i]);

	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				if (arCallNum[i] == arBingo[j][k])
				{
					arVisit[j][k] = 1;
					nTmpj = j;
					nTmpk = k;
					nNumCnt++;
				}
			}
		}

		for (int i = 0; i < 5; i++)
			if (arVisit[nTmpj][i] != 1)
				nFLag = 1;
		if (nFLag == 0)
			nLineCnt++;
		else
			nFLag = 0;
		for (int i = 0; i < 5; i++)
			if (arVisit[i][nTmpk] != 1)
				nFLag = 1;
		if (nFLag == 0)
			nLineCnt++;
		else
			nFLag = 0;
		if (nTmpj == nTmpk)
		{
			for (int i = 0; i < 5; i++)
				if (arVisit[i][i] != 1)
					nFLag = 1;
			if (nFLag == 0)
				nLineCnt++;
			else
				nFLag = 0;
		}
		if (nTmpj + nTmpk == 4)
		{
			for (int i = 0; i < 5; i++)
				if (arVisit[i][4 - i] != 1)
					nFLag = 1;
			if (nFLag == 0)
				nLineCnt++;
			else
				nFLag = 0;
		}
		if (nLineCnt >= 3)
			break;
	}

	printf("%d\n", nNumCnt);
}