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

	int nOriNum = 0;
	int nNewNum = 0;
	int nTmp = 0;
	int nCnt = 0;

	scanf("%d", &nOriNum);

	if (nOriNum == 0)
	{
		printf("1\n");
		return 0;
	}

	nTmp = nOriNum;
	while (nOriNum != nNewNum)
	{
		nNewNum = (nTmp % 10) * 10 + (nTmp / 10 + nTmp % 10) % 10;
		nTmp = nNewNum;
		nCnt++;
	}

	printf("%d\n", nCnt);
}