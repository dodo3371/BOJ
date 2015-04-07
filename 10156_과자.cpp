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

	int nPrice = 0;
	int nNum = 0;
	int nMoney = 0;
	int nSum = 0;

	scanf("%d", &nPrice);
	scanf("%d", &nNum);
	scanf("%d", &nMoney);

	nSum = nPrice * nNum;

	if (nSum > nMoney)
		printf("%d\n", nSum - nMoney);
	else
		printf("0\n");
}