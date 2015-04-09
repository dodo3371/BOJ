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

	int nCoupon = 0;
	int nFreeCh = 0;
	int nChicken = 0;

	while (scanf("%d", &nCoupon) != EOF)
	{
		scanf("%d", &nFreeCh);

		nChicken = 0;
		while (nCoupon > 0)
		{
			if (nCoupon >= nFreeCh)
			{
				nChicken += (nCoupon / nFreeCh) * nFreeCh;
				nCoupon += (nCoupon / nFreeCh)  * (1 - nFreeCh);
			}
			else
			{
				nChicken += nCoupon;
				nCoupon = 0;
			}
		}
		printf("%d\n", nChicken);
	}

}