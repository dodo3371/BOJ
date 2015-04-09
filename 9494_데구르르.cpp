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

	string strSent[1000] = {};
	int nTestcase = 0;
	int nIdx = 0;

	while (scanf("%d", &nTestcase) != 0)
	{
//		cin.ignore(getchar());
		for (int i = 0; i < nTestcase; i++)
			getline(cin, strSent[i]);

		for (int i = 0; i < nTestcase; i++)
			cout << strSent[i] << endl;

		nIdx = 0;
		for (int i = 0; i < nTestcase; i++)
		{
			for (int j = nIdx; j < strSent[i].size(); j++)
			{
				if (strSent[i][j] == ' ')
				{
					nIdx = j + 1;
					break;
				}
			}
		}

		printf("%d\n", nIdx);
	}
}