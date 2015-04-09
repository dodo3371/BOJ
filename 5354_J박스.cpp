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
	int nSize = 0;
	char arData[10][10] = {};

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%d", &nSize);

		for (int i = 0; i < nSize; i++)
		{
			for (int j = 0; j < nSize; j++)
			{
				if (i == 0 || i == nSize - 1 || j == 0 || j == nSize - 1)
					arData[i][j] = '#';
				else
					arData[i][j] = 'J';

				printf("%c", arData[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}