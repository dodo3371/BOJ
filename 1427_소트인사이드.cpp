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

	int nNum = 0;
	int arNum[10] = {};
	int nSize = 0;

	scanf("%d", &nNum);

	for (int i = 0; nNum > 0; i++)
	{
		arNum[i] = nNum % 10;
		nNum /= 10;
		nSize = i;
	}

	sort(arNum, arNum + nSize + 1);
	reverse(arNum, arNum + nSize + 1);

	for (int i = 0; i <= nSize; i++)
		printf("%d", arNum[i]);
}