#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	char arWord[200] = {};
	bool arAlphabet[26] = { false };
	int nTotal = 0;
	int nFlag = 0;
	int nWordSize = 0;

	while (1)
	{
		scanf("%s", &arWord);

		if (arWord[0] == '*')
			return 0;

		nWordSize = strlen(arWord);

		for (int i = 0; i < nWordSize; i++)
			for (int j = i + 1; j < nWordSize; j++)
				if (arWord[i] == arWord[j])
					arAlphabet[arWord[i] - 'a'] = true;

		for (int i = 0; i < 26; i++)
		{
			if (arAlphabet[i] == false)
				printf("Y\n");
			else
				printf("N\n");
		}
	}
}