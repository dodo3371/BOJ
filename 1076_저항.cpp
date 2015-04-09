#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	ll nTotal = 0;
	string str[3] = {};
	string strColor[] = 
	{"black", "brown", "red", "orange", "yellow", 
	"green", "blue", "violet", "grey", "white"};

	for (int i = 0; i < 3; i++)
		cin >> str[i];

	for (int i = 0; i < 10; i++)
		if (str[0] == strColor[i])
			nTotal += i * 10;

	for (int i = 0; i < 10; i++)
		if (str[1] == strColor[i])
			nTotal += i;

	for (int i = 0; i < 10; i++)
		if (str[2] == strColor[i])
			nTotal *= pow(10, i);

	printf("%lld\n", nTotal);
}