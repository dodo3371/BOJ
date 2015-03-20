#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
int nCnt = 0;
char arWord[100][10];

int main()
{
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s", &arWord[i]);

	for (int i = 0; i < n; i++)
		printf("%s", &arWord[i]);

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
	}
}