#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
int sum = 0;
int aTable[100][100];
int bTable[100][100];
int solTable[100][100];

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &aTable[i][j]);

	scanf("%d", &m);
	scanf("%d", &k);

	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			scanf("%d", &bTable[i][j]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			sum = 0;
			for (int l = 0; l < m; l++)
			{
				sum += aTable[i][l] * bTable[l][j];
			}
			solTable[i][j] = sum;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			printf("%d ", solTable[i][j]);
		}
		printf("\n");
	}
}