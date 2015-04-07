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

	int month = 0;
	int date = 0;
	int nTmp = 0;
	int nTotal = 0;

	scanf("%d", &month);
	scanf("%d", &date);

	nTmp = 1;
	nTotal += date;

	while (nTmp < month)
	{
		if (nTmp == 1 || nTmp == 3 || nTmp == 5 || nTmp == 7 || nTmp == 8 || nTmp == 10)
			nTotal += 31;
		else if (nTmp == 4 || nTmp == 6 || nTmp == 9 || nTmp == 11)
			nTotal += 30;
		else if (nTmp == 2)
			nTotal += 28;
		nTmp++;
	}

	if (nTotal % 7 == 0)
		printf("SUN\n");
	else if (nTotal % 7 == 1)
		printf("MON\n");
	else if (nTotal % 7 == 2)
		printf("TUE\n");
	else if (nTotal % 7 == 3)
		printf("WED\n");
	else if (nTotal % 7 == 4)
		printf("THU\n");
	else if (nTotal % 7 == 5)
		printf("FRI\n");
	else if (nTotal % 7 == 6)
		printf("SAT\n");
}