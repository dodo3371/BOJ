#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int arData[101];
	int arSol[101];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arData[i]);

	arSol[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j > i - arData[i]; j--)
		{
			arSol[j] = arSol[j - 1];
		}
		arSol[i - arData[i]] = i;
	}

	for (int i = 1; i <= n; i++)
		printf("%d ", arSol[i]);
}