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

	int nTestcase = 0;
	int nNum = 0;
	int nReverseNum = 0;
	int nSum = 0;
	int nFlag = 0;
	vector <int> arData;
	vector <int> arSumData;

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%d", &nNum);

		nReverseNum = 0;
		nSum = 0;
		nFlag = 0;
		arData.clear();
		arSumData.clear();

		nSum += nNum;
		for (int i = 0; nNum > 0; i++)
		{
			arData.push_back(nNum % 10);
			nNum /= 10;
		}

		for (int i = 0; i < arData.size(); i++)
			nReverseNum += arData[arData.size() - 1 - i] * pow(10, i);

		nSum += nReverseNum;
		for (int i = 0; nSum > 0; i++)
		{
			arSumData.push_back(nSum % 10);
			nSum /= 10;
		}

		for (int i = 0; i <= arSumData.size() / 2; i++)
		{
			if (arSumData[i] != arSumData[(arSumData.size() - 1) - i])
			{
				nFlag = 1;
				break;
			}
		}

		if (nFlag == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}