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

	int nNum = 0;
	int nSum = 0;

	scanf("%d", &nNum);

	for (int i = 0; i <= nNum; i++)
		for (int j = 0; j <= i; j++)
			nSum += i + j;

	printf("%d\n", nSum);
}