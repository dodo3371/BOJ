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

	int nTestcase = 0;
	int nYonsei = 0;
	int nKorea = 0;
	int nYscore = 0;
	int nKscore = 0;

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		nYscore = 0;
		nKscore = 0;
		for (int i = 0; i < 9; i++)
		{
			scanf("%d", &nYonsei);
			scanf("%d", &nKorea);

			nYscore += nYonsei;
			nKscore += nKorea;
		}

		if (nYscore > nKscore)
			printf("Yonsei\n");
		else if (nYscore < nKscore)
			printf("Korea\n");
		else
			printf("Draw\n");
	}
}