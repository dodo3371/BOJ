#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	int arTable1[100][100];
	int arTable2[100][100];
	int solTable[100][100];

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &arTable1[i][j]);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &arTable2[i][j]);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			solTable[i][j] = arTable1[i][j] + arTable2[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", solTable[i][j]);
		}
		printf("\n");
	}
}