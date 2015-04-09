#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int getGcd(int x, int y)
{
	if (y == 0)
		return x;
	getGcd(y, x % y);
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nNum = 0;
	int nRing = 0;
	int nSideRing = 0;

	scanf("%d", &nNum);
	scanf("%d", &nRing);

	for (int i = 1; i < nNum; i++)
	{
		
	}
}