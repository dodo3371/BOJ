#include <iostream>
#include <cstdio>
using namespace std;

int a1, b1;
int a2, b2;
int aSol, bSol;

int getGcd(int x, int y)
{
	if (y == 0)
		return x;
	getGcd(y, x % y);
}

int main()
{
	int gcd;

	scanf("%d", &a1);
	scanf("%d", &b1);
	scanf("%d", &a2);
	scanf("%d", &b2);

	aSol = a1 * b2 + a2 * b1;
	bSol = b1 * b2;

	gcd = getGcd(aSol, bSol);

	aSol /= gcd;
	bSol /= gcd;

	printf("%d %d\n", aSol, bSol);
}