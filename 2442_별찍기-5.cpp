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

	int nNum = 0;

	scanf("%d", &nNum);

	for (int i = 0; i < nNum; i++)
	{
		for (int j = 0; j < nNum + i; j++)
		{
			if (i + j < nNum - 1 || j - (nNum - 1) > i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}