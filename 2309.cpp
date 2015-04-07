#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int arData[9] = {};
int arSolData[9] = {};

void getSolArr(int pos, int nCnt, int nSum)
{
	if (nCnt == 7 && nSum == 100)
	{
		sort(arSolData, arSolData + 9);

		for (int i = 0; i < 9; i++)
		{
			if (arSolData[i] != 0)
				printf("%d\n", arSolData[i]);
		}
		return;
	}

	if (pos >= 9)
		return;

	arSolData[pos] = arData[pos];
	getSolArr(pos + 1, nCnt + 1, nSum + arData[pos]);
	arSolData[pos] = 0;
	getSolArr(pos + 1, nCnt, nSum);
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	for (int i = 0; i < 9; i++)
		scanf("%d", &arData[i]);

	getSolArr(0, 0, 0);
}