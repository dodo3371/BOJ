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

	int nANum = 0;
	int nBNum = 0;
	int nTotal = 0;
	int nFlag = 0;
	
	scanf("%d", &nANum);
	scanf("%d", &nBNum);

	vector <int> arANum(nANum);
	vector <int> arBNum(nBNum);
	vector <bool> arComp(100000000, false);

	for (int i = 0; i < nANum; i++)
		scanf("%d", &arANum[i]);

	for (int i = 0; i < nBNum; i++)
		scanf("%d", &arBNum[i]);

	for (int i = 0; i < nANum; i++)
			arComp[arANum[i]] = true;

	for (int i = 0; i < nBNum; i++)
		if (arComp[arBNum[i]] == true)
			nTotal++;

	printf("%d\n", nANum + nBNum - nTotal * 2);
}