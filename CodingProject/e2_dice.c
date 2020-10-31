#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m=1, i, a, b, c, k=0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d%d%d", &a, &b, &c);

		if (m > k)
			k = m;

		if (a == b)
		{
			if (a == c)
				m = 10000 + a * 1000;

			else
				m = 1000 + a * 100;
		}

		if (b == c)
		{
			if (b == a)
				m = 10000 + b * 1000;

			else
				m = 1000 + b * 100;
		}

		if (c == a)
		{
			if (c == b)
				m = 10000 + c * 1000;

			else
				m = 1000 + c * 100;
		}

		else
		{
			if (a > b && b > c)
				m = a * 100;

			if (b > c && c > a)
				m = b * 100;

			if (c > b && b > a)
				m = c * 100;
		}

	}

	printf("%d", k);


	return 0;
}