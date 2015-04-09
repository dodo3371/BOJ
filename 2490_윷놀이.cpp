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

	int arData[4] = {};
	int nCnt = 0;

	for (int i = 0; i < 3; i++)
	{
		nCnt = 0;
		for (int i = 0; i < 4; i++)
		{
			scanf("%d", &arData[i]);
			if (arData[i] == 0)
				nCnt++;
		}

		if (nCnt == 1)
			printf("A\n");
		else if (nCnt == 2)
			printf("B\n");
		else if (nCnt == 3)
			printf("C\n");
		else if (nCnt == 4)
			printf("D\n");
		else
			printf("E\n");
	}
}