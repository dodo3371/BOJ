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

	int nHour = 0;
	int nMin = 0;

	scanf("%d", &nHour);
	scanf("%d", &nMin);

	if (nMin < 45)
	{
		if (nHour == 0)
		{
			nHour = 23;
		}
		else
			nHour--;
		nMin += 15;
	}
	else
		nMin -= 45;

	printf("%d %d\n", nHour, nMin);
}