//e1 약수 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int  n, k, i, res = 0;

	scanf("%d%d", &n, &k);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			res = i;
			k--;
			if (k == 0)break;
		}
	}

	printf("%d", res);

	return 0;
}