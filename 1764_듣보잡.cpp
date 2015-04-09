#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

bool getUnique(string strName1, string strName2)
{
	return (strName1 == strName2);
}

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int nHear = 0;
	int nSee = 0;
	
	scanf("%d", &nHear);
	scanf("%d", &nSee);

	vector <string> strHear(nHear);
	vector <string> strSee(nSee);

	for (int i = 0; i < nHear; i++)
		cin >> strHear[i];
	
	for (int i = 0; i < nSee; i++)
		cin >> strSee[i];

	for (int i = 0; i < nHear; i++)
		for (int j = 0; j < nSee; j++)
			if (strHear[i] == strSee[j])
				printf("%s\n", strHear[i]);

}