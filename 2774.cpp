#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int t, x;
int tmp;
int nFlag = 0;
vector <int> arData;

int main()
{
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &x);

		arData.clear();

		tmp = x % 10;
		x /= 10;
		arData.push_back(tmp);

		while (x != 0)
		{
			tmp = x % 10;
			x /= 10;

			for (int i = 0; i < arData.size(); i++)
			{
				if (arData[i] == tmp)
				{
					nFlag = 1;
					break;
				}
			}

			if (nFlag == 0)
				arData.push_back(tmp);
			else
				nFlag = 0;
		}
		printf("%d\n", arData.size());
	}

}