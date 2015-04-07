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

	char arScore[] = "FFFFFFDCBAA";
	int nScore = 0;

	scanf("%d", &nScore);

	printf("%c\n", arScore[nScore / 10]);

}