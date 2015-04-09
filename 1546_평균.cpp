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
	float arNum[1000] = {};
	float fAve = 0.f;

	scanf("%d", &nNum);

	for (int i = 0; i < nNum; i++)
		cin >> arNum[i];

	sort(arNum, arNum + nNum);
	
	for (int i = 0; i < nNum; i++)
		fAve += arNum[i] / arNum[nNum - 1] *100;

	printf("%.2f\n", fAve / nNum);
}