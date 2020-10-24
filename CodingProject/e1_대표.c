#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, a=0, m, i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		a += n;
		if (i == 2)
		{
			m = n;
		}
	}

	printf("%d %d", a/5, m);


	return 0;
}