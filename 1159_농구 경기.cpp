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

	int nNameNum = 0;
	int nPos = 0;
	int nCnt = 1;
	string arName[150] = {};
	vector <char> arRes;

	scanf("%d", &nNameNum);

	for (int i = 0; i < nNameNum; i++)
		cin >> arName[i];

	sort(arName, arName + nNameNum);

	for (int i = 1; i < nNameNum; i++)
	{
		if (arName[nPos][0] == arName[i][0])
			nCnt++;
		else
		{
			if (nCnt >= 5)
				arRes.push_back(arName[nPos][0]);
			nPos = i;
			nCnt = 1;
		}
	}

	if (nCnt >= 5)
		arRes.push_back(arName[nPos][0]);

	if (arRes.empty())
		printf("PREDAJA\n");
	else
	{
		for (int i = 0; i < arRes.size(); i++)
			printf("%c", arRes[i]);
		printf("\n");
	}
}