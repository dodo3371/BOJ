#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int nComNum = 0;
int nPair = 0;
int nCom1 = 0;
int nCom2 = 0;
int nCnt = 0;
int arMatrix[101][101] = {};
int arVisit[101] = {};

void DFS(int nVertex)
{
	arVisit[nVertex] = 1;

	for (int i = 1; i <= nComNum; i++)
	{
		if (arMatrix[nVertex][i] == 1 && arVisit[i] != 1)
		{
			nCnt++;
			DFS(i);
		}
	}
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	
	scanf("%d", &nComNum);
	scanf("%d", &nPair);

	for (int i = 0; i < nPair; i++)
	{
		scanf("%d", &nCom1);
		scanf("%d", &nCom2);

		arMatrix[nCom1][nCom2] = 1;
		arMatrix[nCom2][nCom1] = 1;
	}

	DFS(1);
	printf("%d\n", nCnt);
}