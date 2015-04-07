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

	int arData[4] = {};

	for (int i = 0; i < 4; i++)
		scanf("%d", &arData[i]);

	sort(arData, arData + 4);

	printf("%d\n", arData[0] * arData[2]);
}