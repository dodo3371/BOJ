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
	string str = {};
	string strRes = {};

	scanf("%d", &nNum);
	cin >> strRes;

	for (int i = 1; i < nNum; i++)
	{
		cin >> str;
		for (int i = 0; i < strRes.size(); i++)
		{
			if (strRes[i] == str[i])
				strRes[i] = str[i];
			else
				strRes[i] = '?';
		}
	}

	for (int i = 0; i < strRes.size(); i++)
		printf("%c", strRes[i]);
	printf("\n");
}