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
	int arData[100] = {};
	int nTmp = 1;
	int nScore = 0;

	scanf("%d", &nNum);

	for (int i = 0; i < nNum; i++)
		scanf("%d", &arData[i]);

	for (int i = 0; i < nNum; i++)
	{
		if (arData[i] == 1)
		{
			nScore += nTmp;
			nTmp++;
		}
		else
			nTmp = 1;
	}

	printf("%d\n", nScore);
}