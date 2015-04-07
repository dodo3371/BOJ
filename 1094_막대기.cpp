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

	int nSize = 0;
	int nStick = 64;
	int nCnt = 0;

	scanf("%d", &nSize);

	while (nSize > 0)
	{
		if (nSize < nStick)
			nStick /= 2;
		else
		{
			nSize -= nStick;
			nCnt++;
		}
	}

	printf("%d\n", nCnt);
}