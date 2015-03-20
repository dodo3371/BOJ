#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int getGcd(int x, int y)
{
	if (y == 0)
		return x;
	getGcd(y, x % y);
}

int main()
{
	int n, m;
	int gcd, lcm;

	scanf("%d", &n);
	scanf("%d", &m);

	gcd = getGcd(n, m);
	lcm = (n * m) / gcd;

	printf("%d\n%d\n", gcd, lcm);
}