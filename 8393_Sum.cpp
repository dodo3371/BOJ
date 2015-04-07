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

	int nNum = 0;
	int nSum = 0;

	scanf("%d", &nNum);

	for (int i = 1; i <= nNum; i++)
		nSum += i;

	printf("%d\n", nSum);
}