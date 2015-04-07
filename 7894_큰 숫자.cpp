#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nTestcase = 0;
	int nNum = 0;
	int nRes = 0;

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%d", &nNum);

		nRes = 0;
		for (int i = 1; i <= nNum; i++)
			nRes += log10(i);

		printf("%d\n", nRes + 1);
	}
}