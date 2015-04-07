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

	int r, s;
	int nMax = 0;
	int nTmp = 0;
	string arChair[53] = {};
	int arData[53][53] = {};
	int nY[8] = { -1, -1, 0, 1, 1,  1,  0, -1 };
	int nX[8] = {  0,  1, 1, 1, 0, -1, -1, -1 };

	scanf("%d", &r);
	scanf("%d", &s);

	for (int i = 0; i < r; i++)
		cin >> arChair[i];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (arChair[i][j] == '.')
				arData[i][j] = 0;
			else
				arData[i][j] = -1;
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (arData[i][j] == -1)
			{
				for (int k = 0; k < 8; k++)
				{
					int nextY = i + nY[k];
					int nextX = j + nX[k];

					if (nextY < 0 || nextY >= r || nextX < 0 || nextX >= s)
						continue;
					else if (arData[nextY][nextX] == -1)
						nTmp++;
					else
						arData[nextY][nextX]++;
				}
			}
		}
	}

	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
			nMax = max(nMax, arData[i][j]);

	printf("%d\n", nMax + nTmp / 2);
}