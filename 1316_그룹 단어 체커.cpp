#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nWordNum = 0;
	int nFlag = 0;
	int nSize = 0;
	int nCnt = 0;
	string arWord;

	scanf("%d", &nWordNum);

	while (nWordNum--)
	{
		cin >> arWord;

		bool arAlphabet[26] = { false };
		arAlphabet[arWord[0] - 'a'] = true;
		nFlag = 0;

		for (int i = 1; i < arWord.size(); i++)
		{
			if (arAlphabet[arWord[i] - 'a'] == false)
				arAlphabet[arWord[i] - 'a'] = true;
			else if (arAlphabet[arWord[i] - 'a'] == true && arWord[i] != arWord[i - 1])
			{
				nFlag = 1;
				break;
			}
		}
		if (nFlag == 0)
			nCnt++;
	}
	printf("%d\n", nCnt);
}