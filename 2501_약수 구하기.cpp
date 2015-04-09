#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int n, k;
	int arFactor[10000] = {};
	int nNum = 1;

	scanf("%d", &n);
	scanf("%d", &k);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			arFactor[nNum] = i;
			nNum++;
		}
	}

	printf("%d\n", arFactor[k]);
}