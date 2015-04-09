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
	int nNote1 = 0;
	int nNote2 = 0;

	scanf("%d", &nTestcase);

	while (nTestcase--)
	{
		vector <bool> arComp(6000000000, false);

		scanf("%d", &nNote1);
		vector <int> arNote1(nNote1);
		
		for (int i = 0; i < nNote1; i++)
			scanf("%d", &arNote1[i]);

		scanf("%d", &nNote2);
		vector <int> arNote2(nNote2);

		for (int i = 0; i < nNote2; i++)
			scanf("%d", &arNote2[i]);

		for (int i = 0; i < nNote1; i++)
		{
			if (arNote1[i] < 0)
				arComp[abs(arNote1[i]) + 3000000000] = true;
			else
				arComp[arNote1[i]] = true;

		}
		for (int i = 0; i < nNote2; i++)
		{
			if (arNote2[i] < 0)
			{
				if (arComp[abs(arNote2[i]) + 3000000000] == true)
					printf("1\n");
				else
					printf("0\n");
			}
			else
			{
				if (arComp[arNote2[i]] == true)
					printf("1\n");
				else
					printf("0\n");
			}
		}
	}
}