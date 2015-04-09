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

	int nScore = 0;
	int nTotal = 0;
	int nMax = 0;
	int nNum = 0;

	for (int i = 1; i <= 5; i++)
	{
		nTotal = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &nScore);
			nTotal += nScore;
		}
		if (nMax < nTotal)
		{
			nMax = nTotal;
			nNum = i;
		}
	}
	
	printf("%d %d\n", nNum, nMax);
}