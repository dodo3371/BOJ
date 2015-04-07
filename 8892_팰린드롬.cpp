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

	int nTestcase = 0;
	int nWord = 0;
	int nFlag = 0;
	string arWord[100] = {};
	string oriWord = {};
	string revWord = {};

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%d", &nWord);

		for (int i = 0; i < nWord; i++)
			cin >> arWord[i];

		for (int i = 0; i < nWord; i++)
		{
			nFlag = 0;
			for (int j = 0; j < nWord; j++)
			{
				if (i == j)
					continue;
				revWord = arWord[i] + arWord[j];
				oriWord = revWord;
				reverse(revWord.begin(), revWord.end());

				if (oriWord == revWord)
				{
					cout << oriWord << endl;
					nFlag = 1;
					break;
				}
			}
			if (nFlag == 1)
				break;
		}
		if (nFlag == 0)
			printf("0\n");
	}
}