#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nTestcase = 0;
	int nNum = 0;
	vector <double> arData(pow(10, 7) + 1);

	arData[1] = log10(1);
	for (int i = 2; i <= pow(10, 7); i++)
		arData[i] = arData[i - 1] + log10(i);

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%d", &nNum);
		printf("%d\n", (int)arData[nNum] + 1);
	}
}