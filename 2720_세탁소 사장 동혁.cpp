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
	int nChange = 0;
	int arChange[4] = {};

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%d", &nChange);

		memset(arChange, 0, sizeof(arChange));
		while (nChange > 0)
		{
			if (nChange >= 25)
			{
				arChange[0] = nChange / 25;
				nChange %= 25;
			}
			else if (nChange >= 10)
			{
				arChange[1] = nChange / 10;
				nChange %= 10;
			}
			else if (nChange >= 5)
			{
				arChange[2] = nChange / 5;
				nChange %= 5;
			}
			else
			{
				arChange[3] = nChange;
				break;
			}
		}

		for (int i = 0; i < 4; i++)
			printf("%d ", arChange[i]);
		printf("\n");
	}
}