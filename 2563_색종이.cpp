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

	bool arTable[100][100] = {false};
	int nPaperNum = 0;
	int nX = 0;
	int nY = 0;
	int nTotal = 0;

	scanf("%d", &nPaperNum);

	while (nPaperNum--)
	{
		scanf("%d", &nX);
		scanf("%d", &nY);

		for (int i = nY; i < nY + 10; i++)
		{
			for (int j = nX; j < nX + 10; j++)
			{
				if (arTable[i][j] == false)
				{
					arTable[i][j] = true;
					nTotal++;
				}
			}
		}
	}

	printf("%d\n", nTotal);
}