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

	string arA;
	string arB;
	int nA = 0;
	int nB = 0;

	cin >> arA >> arB;

	reverse(arA.begin(), arA.end());
	reverse(arB.begin(), arB.end());

	for (int i = 0; i < 3; i++)
	{
		nA += (arA[2 - i] - '0') * pow(10, i);
		nB += (arB[2 - i] - '0') * pow(10, i);
	}

	if (nA > nB)
		printf("%d\n", nA);
	else
		printf("%d\n", nB);
}