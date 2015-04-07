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

	int nKi = 0;
	int nQ = 0;
	int nR = 0;
	int nB = 0;
	int nKn = 0;
	int nP = 0;

	scanf("%d", &nKi);
	scanf("%d", &nQ);
	scanf("%d", &nR);
	scanf("%d", &nB);
	scanf("%d", &nKn);
	scanf("%d", &nP);

	printf("%d %d %d %d %d %d\n", 1 - nKi, 1 - nQ, 2 - nR, 2 - nB, 2 - nKn, 8 - nP);
}