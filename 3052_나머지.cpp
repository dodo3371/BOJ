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

	bool arData[1001] = {false};
	int nNum = 0;
	int nCnt = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nNum);

		arData[nNum % 42] = true;
	}

	for (int i = 0; i <= 1000; i++)
		if (arData[i] == true)
			nCnt++;

	printf("%d\n", nCnt);
}