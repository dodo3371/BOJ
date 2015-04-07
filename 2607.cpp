#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
int nCnt = 0;
int nTmp = 0;
char arWord[110][15] = {};
int arWordSize[100] = {};
int arAlphabet[110][26] = {};

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s", &arWord[i]);

	for (int i = 0; i < n; i++)
		for (int j = 0; arWord[i][j] != NULL; j++)
			arWordSize[i]++;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < arWordSize[i]; j++)
			arAlphabet[i][arWord[i][j] - 65]++;

	for (int i = 1; i < n; i++)
	{
		if (arWordSize[0] == arWordSize[i])
		{
			nTmp = 0;
			for (int j = 0; j < 26; j++)
			{
				if (arAlphabet[0][j] != arAlphabet[i][j])
					nTmp++;
			}

			if (nTmp <= 2)
				nCnt++;
		}
		else if (arWordSize[0] == arWordSize[i] + 1 || arWordSize[0] + 1 == arWordSize[i])
		{
			nTmp = 0;
			for (int j = 0; j < 26; j++)
			{
				if (arAlphabet[0][j] != arAlphabet[i][j])
					nTmp++;
			}

			if (nTmp <= 1)
				nCnt++;
		}
	}
	printf("%d\n", nCnt);
}