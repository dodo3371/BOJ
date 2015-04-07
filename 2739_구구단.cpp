#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nNum = 0;

	scanf("%d", &nNum);

	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", nNum, i, nNum * i);
}