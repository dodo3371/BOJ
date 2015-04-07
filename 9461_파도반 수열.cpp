#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	ll arData[101] = {};
	int nTestcase = 0;
	int nNum = 0;

	scanf("%d", &nTestcase);

	arData[1] = arData[2] = arData[3] = 1;
	arData[4] = arData[5] = 2;

	for (int i = 6; i <= 100; i++)
		arData[i] = arData[i - 1] + arData[i - 5];

	while (nTestcase--)
	{
		scanf("%d", &nNum);
		printf("%lld\n", arData[nNum]);
	}
}