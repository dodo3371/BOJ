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

	int arData[10];
	int sum = 0;
	int nTmp1 = 0;
	int nTmp2 = 0;
	int nMax = 0;
	int nCnt = 0;
	int nRes = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arData[i]);
		sum += arData[i];
	}

	sort(arData, arData + 10);

	while(nCnt < 10)
	{
		nTmp1 = 1;
		nTmp2 = arData[nCnt];
		for (int i = nCnt + 1; i < 10; i++)
		{
			if (arData[nCnt] == arData[i])
			{
				nTmp1++;
				nTmp2 = arData[i];
			}
			else
				break;
		}
		if (nMax < nTmp1)
		{
			nMax = nTmp1;
			nRes = nTmp2;
		}

		nMax = max(nMax, nTmp1);
		nCnt += nTmp1;
	}

	printf("%d\n%d\n", sum / 10, nRes);
}