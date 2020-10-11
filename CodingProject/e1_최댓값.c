//e1 �ִ밪
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k=0, i, j=0;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &n);
		
		if (k < n)
		{
			j = i + 1;
			k = n;
		}

	}

	printf("\n%d\n%d", k, j);



	return 0;
}