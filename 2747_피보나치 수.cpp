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

	int nNum = 0;
	ll arFibo[46] = {};

	scanf("%d", &nNum);

	arFibo[1] = 1;

	for (int i = 2; i <= nNum; i++)
	{
		arFibo[i] = arFibo[i - 2] + arFibo[i - 1];
	}

	printf("%lld\n", arFibo[nNum]);
}