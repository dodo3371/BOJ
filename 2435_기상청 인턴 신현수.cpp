#include <iostream>
#include <cstdio>
using namespace std;

int nDays = 0;
int nNumber = 0;
int arTemperature[100] = {};
int nMax = 0;
int nSum = 0;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &nDays);
	scanf("%d", &nNumber);

	for (int i = 0; i < nDays; i++)
		scanf("%d", &arTemperature[i]);

	nMax = -200;

	for (int i = 0; i <= nDays - nNumber; i++)
	{
		nSum = 0;

		for (int j = i; j < nNumber + i; j++)
			nSum += arTemperature[j];

		if (nMax < nSum)
			nMax = nSum;
	}

	printf("%d\n", nMax);
}