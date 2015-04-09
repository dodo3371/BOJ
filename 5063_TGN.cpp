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

	int nTestcase = 0;
	int r, e, c;

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		scanf("%d", &r);
		scanf("%d", &e);
		scanf("%d", &c);

		if (r < e - c)
			printf("advertise\n");
		else if (r == e - c)
			printf("does not matter\n");
		else
			printf("do not advertise\n");

	}
}