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

	int nStudentNum = 0;
	string arStudentName[100] = {};
	int arDate[100] = {};
	int arMonth[100] = {};
	int arYear[100] = {};
	int nMax = 0;
	int nMin = 9999;

	scanf("%d", &nStudentNum);

	for (int i = 0; i < nStudentNum; i++)
	{
		cin >> arStudentName[i];
		scanf("%d", &arDate[i]);
		scanf("%d", &arMonth[i]);
		scanf("%d", &arYear[i]);
	}

	for (int i = 0; i < nStudentNum; i++)
	{
		if ()
	}
}