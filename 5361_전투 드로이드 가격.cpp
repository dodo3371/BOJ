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

	int nTestcase = 0;
	float A = 0.0f;
	float B = 0.0f;
	float C = 0.0f;
	float D = 0.0f;
	float E = 0.0f;
	float nCost = 0.0f;

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%f", &A);
		scanf("%f", &B);
		scanf("%f", &C);
		scanf("%f", &D);
		scanf("%f", &E);

		nCost = A * 350.34 + B * 230.90 + C * 190.55 + D * 125.30 + E * 180.90;

		printf("$%.2f\n", nCost);
	}
}