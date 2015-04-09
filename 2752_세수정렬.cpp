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

	int arData[3] = {};

	for (int i = 0; i < 3; i++)
		scanf("%d", &arData[i]);

	sort(arData, arData + 3);

	for (int i = 0; i < 3; i++)
		printf("%d ", arData[i]);

}