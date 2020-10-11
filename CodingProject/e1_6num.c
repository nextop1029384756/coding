//e1 °ËÁõ¼ö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, n = 0 , i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		n = n + a * a;
	}

	printf("%d", n%10);

	return 0;
}