#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int arData[3] = {};

	for (int i = 0; i < 3; i++)
		scanf("%d", &arData[i]);

	sort(arData, arData + 3);

	if (arData[0] == arData[1] && arData[1] == arData[2])
		printf("%d\n", 10000 + arData[0] * 1000);

	else if (arData[0] == arData[1] || arData[1] == arData[2])
		printf("%d\n", 1000 + arData[1] * 100);
	else
		printf("%d\n", arData[2] * 100);
}