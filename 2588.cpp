#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int nNum1, nNum2;
	int tmp;
	int nRes = 0;

	scanf("%d", &nNum1);
	scanf("%d", &nNum2);

	for (int i = 1; i <= 100; i *= 10)
	{
		tmp = nNum1 * (nNum2 % 10);
		printf("%d\n", tmp);
		nRes += tmp * i;
		nNum2 /= 10;
	}
	printf("%d\n", nRes);
}