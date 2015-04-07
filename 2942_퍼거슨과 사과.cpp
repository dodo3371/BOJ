#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nAppleR = 0;
	int nAppleG = 0;
	int nGcd = 0;

	scanf("%d", &nAppleR);
	scanf("%d", &nAppleG);

	nGcd = gcd(nAppleR, nAppleG);

	for (int i = 1; i <= nGcd; i++)
		if (nGcd % i == 0)
			printf("%d %d %d\n", i, nAppleR / i, nAppleG / i);
}