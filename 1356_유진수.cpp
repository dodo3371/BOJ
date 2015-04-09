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
	int arNum[10] = {};
	int nSize = 0;
	int nTmp1 = 1;
	int nTmp2 = 1;

	scanf("%d", &nNum);

	for (int i = 0; nNum > 0; i++)
	{
		arNum[i] = nNum % 10;
		nNum /= 10;
		nSize = i;
	}

	for (int i = 1; i <= nSize; i++)
	{
		nTmp1 = 1;
		nTmp2 = 1;
		for (int j = 0; j < i; j++)
			nTmp1 *= arNum[j];
		for (int k = i; k <= nSize; k++)
			nTmp2 *= arNum[k];

		if (nTmp1 == nTmp2)
		{
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");
}