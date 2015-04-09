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

	int nQuest = 0;
	vector < pair<int, string> > arAnswer(3);
	string strAdrian = "ABC";
	string strBruno = "BABC";
	string strGoran = "CCAABB";
	string strAnswer = {};

	scanf("%d", &nQuest);
	cin >> strAnswer;

	arAnswer[0].second = "Adrian";
	arAnswer[1].second = "Bruno";
	arAnswer[2].second = "Goran";

	for (int i = 0; i < strAnswer.size(); i++)
	{
		if (strAnswer[i] == strAdrian[i % 3])
			arAnswer[0].first++;
		if (strAnswer[i] == strBruno[i % 4])
			arAnswer[1].first++;
		if (strAnswer[i] == strGoran[i % 6])
			arAnswer[2].first++;
	}
	
	sort(arAnswer.begin(), arAnswer.end());

	if (arAnswer[2].first == arAnswer[0].first)
		for (int i = 0; i < 3; i++)
			cout << arAnswer[i].first << "\n" << arAnswer[i].second << endl;
	else if (arAnswer[2].first == arAnswer[1].first)
		for (int i = 1; i < 3; i++)
			cout << arAnswer[i].first << "\n" << arAnswer[i].second << endl;
	else
		cout << arAnswer[2].first << "\n" << arAnswer[2].second << endl;
}