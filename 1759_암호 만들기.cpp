#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int nWordSize = 0;
int nWordNum = 0;
char arWord[15] = {};
char arRes[15] = {};
int nVowel = 0;
int nConsonant = 0;

void getPassword(int nPos, int nCnt)
{
	if (nPos >= nWordNum && nCnt != nWordSize)
		return;

	if (nCnt == nWordSize)
	{
		nVowel = 0;
		nConsonant = 0;
		for (int i = 0; i < nWordSize; i++)
		{
			if (arRes[i] == 'a' || arRes[i] == 'e' || arRes[i] == 'i' || arRes[i] == 'o' || arRes[i] == 'u')
				nVowel++;
			else
				nConsonant++;
		}

		if (nVowel >= 1 && nConsonant >= 2)
		{
			for (int i = 0; i < nWordSize; i++)
				printf("%c", arRes[i]);
			printf("\n");
		}
		return;
	}

	arRes[nCnt] = arWord[nPos];

	getPassword(nPos + 1, nCnt + 1);
	getPassword(nPos + 1, nCnt);
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &nWordSize);
	scanf("%d", &nWordNum);

	for (int i = 0; i < nWordNum; i++)
		cin >> arWord[i];

	sort(arWord, arWord + nWordNum);

	getPassword(0, 0);
}