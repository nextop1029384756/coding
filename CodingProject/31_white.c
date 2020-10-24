#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, f=0, s=0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &n);

		if (f < n)
		{
			s = f;
			f = n;
		}
	}

	printf("%d %d", f, s);



	return 0;
}