#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int t, n, m;
vector <int> note1;
vector <int> note2;
int nFlag = 0;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		note1.resize(n);
		
		for (int i = 0; i < n; i++)
			scanf("%d", &note1[i]);

		scanf("%d", &m);
		note2.resize(m);
		
		for (int i = 0; i < m; i++)
			scanf("%d", &note2[i]);

		sort(note1.begin(), note1.end());
		sort(note2.begin(), note2.end());

		for (int i = 0; i < n; i++)
			cout << note1[i] << " ";
		cout << endl;

		for (int i = 0; i < m; i++)
			cout << note2[i] << " ";
		cout << endl;

		for (int i = 0; i < note2.size(); i++)
		{
			for (int j = 0; j < note1.size(); j++)
			{
				if (note2[i] == note1[j])
				{
					note1.erase(note1.begin() + j);
					nFlag = 1;
					break;
				}
			}
			if (nFlag == 1)
			{
				printf("%d\n", nFlag);
				nFlag = 0;
			}
			else
				printf("%d\n", nFlag);
		}
	}

}