#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	ll nNum = 0;
	ll nSol = 0;
	ll nTmp1 = 0;
	ll nTmp2 = 0;
	ll nStart = 0;
	ll nEnd = 0;
	ll nMax = 987654321;
	vector <ll> arSolution;

	scanf("%lld", &nNum);

	for (ll i = 0; i < nNum; i++)
	{
		scanf("%lld", &nSol);
		arSolution.push_back(nSol);
	}

	sort(arSolution.begin(), arSolution.end());

	nStart = 0;
	nEnd = nNum - 1;
	while (nStart < nEnd)
	{
		if (nMax > abs(arSolution[nStart] + arSolution[nEnd]))
		{
			nMax = abs(arSolution[nStart] + arSolution[nEnd]);
			nTmp1 = arSolution[nStart];
			nTmp2 = arSolution[nEnd];
		}
		if (arSolution[nStart] + arSolution[nEnd] < 0)
			nStart++;
		else
			nEnd--;
	}

	printf("%lld %lld\n", nTmp1, nTmp2);
}