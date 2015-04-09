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
	int nX = 0;
	int nY = 0;
	int arBall[4] = {};
	
	arBall[1] = 1;
	scanf("%d", &nNum);

	while (nNum--)
	{
		scanf("%d", &nX);
		scanf("%d", &nY);

		swap(arBall[nX], arBall[nY]);
	}

	for (int i = 1; i <= 3; i++)
		if (arBall[i] == 1)
			printf("%d\n", i);
}