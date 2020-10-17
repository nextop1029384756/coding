#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, s=100, p=0;

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &n);

		if (n % 2 == 1)
		{
			p += n;
			if (s > n)
			{
				s = n;
			}
		
		}

	}

	if (p == 0)printf("-1");
	else printf("%d\n%d", p, s);


	return 0;
} 