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

	int a, b, c;
	int nRes = 0;
	int arData[10] = {};

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	nRes = a * b * c;

	while (nRes > 0)
	{
		arData[nRes % 10] += 1;
		nRes /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", arData[i]);
}