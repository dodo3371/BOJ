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

	int m, n;
	int nMul = 1;
	int nSum = 0;
	int nMin = 0;

	scanf("%d", &m);
	scanf("%d", &n);

	while (nMul * nMul <= n)
	{
		if (nMul * nMul >= m && nMul * nMul <= n)
			nSum += nMul * nMul;
		nMul++;
	}

	nMul = 1;

	while (nMul * nMul <= n)
	{
		if (nMul * nMul >= m)
		{
			nMin = nMul * nMul;
			break;
		}
		nMul++;
	}

	if (nSum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", nSum, nMin);
}