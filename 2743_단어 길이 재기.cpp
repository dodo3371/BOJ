#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	char arWord[100] = {};

	cin >> arWord;

	cout << strlen(arWord) << endl;
}