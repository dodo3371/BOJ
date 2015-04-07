#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	int x = 0;
	int y = 0;
	int w = 0;
	int h = 0;

	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &w);
	scanf("%d", &h);

	printf("%d\n", min(min(x, y), min(w - x, h - y)));
}