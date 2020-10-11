//e1 지능형 기차
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	freopen("input.txt", "r", stdin);
	int a, b, sum=0, max=0, i;

	for (i = 0; i < 4; i++)
	{
		scanf("%d%d", &a, &b);
		sum = sum + b - a;
		if (sum > max)
			max = sum;
	}

	printf("%d", max);

	return 0;
}