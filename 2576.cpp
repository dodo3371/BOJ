#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int arData[7];
vector <int> arOddData;
int nSum = 0;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	for (int i = 0; i < 7; i++)
		scanf("%d", &arData[i]);

	for (int i = 0; i < 7; i++)
		if (arData[i] % 2 == 1)
			arOddData.push_back(arData[i]);

	sort(arOddData.begin(), arOddData.end());

	for (int i = 0; i < arOddData.size(); i++)
		nSum += arOddData[i];

	if (arOddData.empty())
		printf("-1\n");
	else
		printf("%d\n%d\n", nSum, arOddData[0]);
}