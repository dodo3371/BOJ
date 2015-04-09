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
	int nWidth = 0;
	int nHeight = 0;
	int nSize = 0;

	scanf("%d", &nNum);
	scanf("%d", &nWidth);
	scanf("%d", &nHeight);

	while (nNum--)
	{
		scanf("%d", &nSize);

		if (nWidth * nWidth + nHeight * nHeight >= nSize * nSize)
			printf("DA\n");
		else
			printf("NE\n");
	}
}