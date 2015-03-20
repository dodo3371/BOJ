#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int nCnt = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			for (int j = i; j <= n; j += i)
				nCnt++;

	printf("%d\n", nCnt / 2);
}