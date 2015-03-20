#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int t, k, n;
int arData[15][15];

int main()
{
	scanf("%d", &t);

	while (t--)
	{
		scanf("%d", &k);
		scanf("%d", &n);

		for (int i = 1; i <= k; i++)
			arData[1][i] = 1;

		for (int i = 1; i <= n; i++)
			arData[0][i] = i;

		for (int i = 1; i <= k; i++)
			for (int j = 1; j <= n; j++)
				arData[i][j] = arData[i][j - 1] + arData[i - 1][j];

		printf("%d\n", arData[k][n]);
	}
}