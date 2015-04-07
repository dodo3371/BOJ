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

	int nSong = 0;
	int nAve = 0;

	scanf("%d", &nSong);
	scanf("%d", &nAve);

	printf("%d\n", (nSong * (nAve - 1)) + 1);
}