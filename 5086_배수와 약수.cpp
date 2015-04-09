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

	int nNum1 = 0;
	int nNum2 = 0;

	while (1)
	{
		scanf("%d", &nNum1);
		scanf("%d", &nNum2);

		if (nNum1 == 0 && nNum2 == 0)
			break;

		if (nNum2 % nNum1 == 0)
			printf("factor\n");
		else if (nNum1 % nNum2 == 0)
			printf("multiple\n");
		else
			printf("neither\n");
	}
}