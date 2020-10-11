//¿∑≥Ó¿Ã
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	freopen("input.txt", "r", stdin);
	int a, n=0, i, j;


	for (j = 0; j < 3; j++)
	{
		n = 0;
		for (i = 0; i < 4; i++)
		{
			scanf("%d", &a);
			n = n + a;
		}

		if (n == 3)	printf("a");
		if (n == 2)	printf("b");
		if (n == 1)	printf("c");
		if (n == 4)	printf("d");
		if (n == 0) printf("e");
	}
	



	return 0;
}