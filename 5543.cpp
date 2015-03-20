#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int nHam, nBev;
	int nHamMin = 2000;
	int nBevMin = 2000;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &nHam);
		if (nHam < nHamMin)
			nHamMin = nHam;
	}

	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &nBev);
		if (nBev < nBevMin)
			nBevMin = nBev;
	}

	printf("%d", nHamMin + nBevMin - 50);
}