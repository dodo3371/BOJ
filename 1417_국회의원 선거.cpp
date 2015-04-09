#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nNum = 0;
	int nDasom = 0;
	int nSign = 0;
	int nCnt = 0;
	int nTmp = 0;
	priority_queue <int> arSign;
	
	scanf("%d", &nNum);
	scanf("%d", &nDasom);

	if (nNum == 1)
	{
		printf("0\n");
		return 0;
	}

	for (int i = 0; i < nNum - 1; i++)
	{
		scanf("%d", &nSign);
		arSign.push(nSign);
	}

	while (nDasom <= arSign.top())
	{
		nTmp = arSign.top();
		nTmp--;
		arSign.pop();
		arSign.push(nTmp);
		nDasom++;
		nCnt++;
	}
	printf("%d\n", nCnt);
}