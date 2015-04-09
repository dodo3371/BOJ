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

	string strHex = {};
	int nDec = 0;

	cin >> strHex;

	reverse(strHex.begin(), strHex.end());

	for (int i = 0; i < strHex.size(); i++)
	{
		if (strHex[i] >= 'A')
			nDec += (int)(strHex[i] - 55) * pow(16, i);
		else
			nDec += (int)(strHex[i] - '0') * pow(16, i);
	}

	printf("%d\n", nDec);
}