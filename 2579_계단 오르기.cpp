#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int nStep = 0;
int arStepScore[310] = {};
int DP[3][310] = {};

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &nStep);

	for (int i = 1; i <= nStep; i++)
		scanf("%d", &arStepScore[i]);

	DP[1][1] = arStepScore[1];

	for (int i = 2; i <= nStep; i++)
	{
		DP[1][i] = max(DP[1][i - 2], DP[2][i - 2]) + arStepScore[i];
		DP[2][i] = DP[1][i - 1] + arStepScore[i];
	}

	printf("%d\n", max(DP[1][nStep], DP[2][nStep]));
}