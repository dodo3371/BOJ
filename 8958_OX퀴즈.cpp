#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int nTestcase = 0;
char arString[80];
int nTmp = 0;
int nTotal = 0;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%s", &arString);

		nTotal = 0;
		nTmp = 1;
		for (int i = 0; arString[i] != '\0'; i++)
		{
			if (arString[i] == 'O')
			{
				nTotal += nTmp;
				nTmp++;
			}
			else if (arString[i] == 'X')
				nTmp = 1;
		}
		printf("%d\n", nTotal);
	}
}