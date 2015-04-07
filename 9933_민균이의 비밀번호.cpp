#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int nNumber = 0;
int nFlag = 0;
vector <string> arWord;
string arTmpWord;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &nNumber);

	arWord.resize(nNumber);

	for (int i = 0; i < nNumber; i++)
		cin >> arWord[i];

	for (int i = 0; i < nNumber; i++)
	{
		arTmpWord = arWord[i];
		reverse(arWord[i].begin(), arWord[i].end());
		for (int j = 0; j < nNumber; j++)
		{
			if (arTmpWord == arWord[j])
				nFlag = 1;
		}
		if (nFlag == 1)
		{
			printf("%d %c\n", arWord[i].size(), arWord[i][arWord[i].size()  / 2]);
			break;
		}
	}
	return 0;
}