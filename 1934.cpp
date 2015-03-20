#include <iostream>
#include <cstdio>
using namespace std;

int n, a, b;

int getGcd(int x, int y)
{
	if (y == 0)
		return x;
	getGcd(y, x % y);
}

int main()
{
	int gcd;
	int lcm;

	scanf("%d", &n);

	while (n--)
	{
		scanf("%d", &a);
		scanf("%d", &b);

		gcd = getGcd(a, b);
		lcm = (a * b) / gcd;

		printf("%d\n", lcm);
	}
	
}
