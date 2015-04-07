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

	char arWord[100] = {};
	char arOriginalWord[100] = {};
	int nPos = 0;
	int nSize = 0;
	int nTmp = 0;

	cin.getline(arWord, 100);
	nSize = strlen(arWord);

	while (nPos < nSize)
	{
		if (arWord[nPos] == 'a' || arWord[nPos] == 'e' || arWord[nPos] == 'i' || arWord[nPos] == 'o' || arWord[nPos] == 'u')
		{
			arOriginalWord[nTmp] = arWord[nPos];
			nTmp++;
			nPos += 3;
			continue;
		}
		else
		{
			arOriginalWord[nTmp] = arWord[nPos];
			nTmp++;
			nPos++;
		}
	}

	printf("%s\n", arOriginalWord);
}