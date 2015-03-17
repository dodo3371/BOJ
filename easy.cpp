#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int nMin, nMax;

	scanf("%d", &n);

	nMin = 2;
	nMax = 8;

	if (n == 1)
		printf("1");
	else
	{
		for (int i = 1;; i++)
		{
			if (n >= nMin && n < nMax)
			{
				printf("%d", i + 1);
				break;
			}
			nMin += 6 * i;
			nMax += 6 * (i + 1);
		}
	}
}