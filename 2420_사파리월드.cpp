#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif

	ll n, m;

	scanf("%lld", &n);
	scanf("%lld", &m);

	printf("%lld\n", abs(n - m));
}