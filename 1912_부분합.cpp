#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int n = 0;
int nNum = 0;
int nMax = 0;
int nSum = 0;
vector <int> arNum;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &nNum);
		arNum.push_back(nNum);
	}

	nMax = arNum[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (nMax <= nSum)
				nMax = nSum;

		}
	}
	printf("%d\n", nMax);
}