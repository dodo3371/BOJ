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

	string nA = {};
	string nB = {};
	int nMin = 0;
	int nMax = 0;
	
	cin >> nA >> nB;
	
	for (int i = 0; i < nA.size(); i++)
	{
		if ((nA[nA.size() - 1 - i] - '0' == 5) || (nA[nA.size() - 1 - i] - '0' == 6))
		{
			nMin += 5 * pow(10, i);
			nMax += 6 * pow(10, i);
		}
		else
		{
			nMin += (nA[nA.size() - 1 - i] - '0') * pow(10, i);
			nMax += (nA[nA.size() - 1 - i] - '0') * pow(10, i);
		}
	}

	for (int i = 0; i < nB.size(); i++)
	{
		if ((nB[nB.size() - 1 - i] - '0' == 5) || (nB[nB.size() - 1 - i] - '0' == 6))
		{
			nMin += 5 * pow(10, i);
			nMax += 6 * pow(10, i);
		}
		else
		{
			nMin += (nB[nB.size() - 1 - i] - '0') * pow(10, i);
			nMax += (nB[nB.size() - 1 - i] - '0') * pow(10, i);
		}
	}

	printf("%d %d\n", nMin, nMax);
}