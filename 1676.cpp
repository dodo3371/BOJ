#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	int nCnt = 0;
	int nMul = 5;

	scanf("%d", &n);

	for (int i = 5; i <= n; i *= 5)
		for (int j = 1; j <= n; j++)
			if (j % i == 0)
				nCnt++;

	printf("%d\n", nCnt);
}