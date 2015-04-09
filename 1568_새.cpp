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

	int nBird = 0;
	int nSong = 0;
	int nSec = 0;

	scanf("%d", &nBird);

	nSong = 1;
	while (nBird > 0)
	{
		if (nSong > nBird)
			nSong = 1;
		nBird -= nSong;
		nSong++;
		nSec++;
	}

	printf("%d\n", nSec);
}