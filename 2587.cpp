#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int arData[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arData[i]);
		sum += arData[i];
	}

	sort(arData, arData + 5);

	printf("%d\n%d\n", sum / 5, arData[2]);
}