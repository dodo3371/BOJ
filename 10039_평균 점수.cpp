#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nScore = 0;
	int nTotal = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &nScore);

		if (nScore <= 40)
			nTotal += 40;
		else
			nTotal += nScore;
	}

	printf("%d\n", nTotal / 5);
}