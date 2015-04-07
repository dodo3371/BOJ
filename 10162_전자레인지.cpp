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

	int a = 0;
	int b = 0;
	int c = 0;
	int nTime = 0;
	int nShare = 0;
	scanf("%d", &nTime);

	if (nTime % 10 != 0)
		printf("-1\n");
	else
	{
		while (nTime > 0)
		{
			if (nTime >= 300)
			{
				nShare = nTime / 300;
				nTime -= nShare * 300;
				a += nShare;
			}
			else if (nTime >= 60)
			{
				nShare = nTime / 60;
				nTime -= nShare * 60;
				b += nShare;
			}
			else if (nTime >= 10)
			{
				nShare = nTime / 10;
				nTime -= nShare * 10;
				c += nShare;
			}
		}
		printf("%d %d %d\n", a, b, c);
	}
}