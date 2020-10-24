#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	int n, p, i=0, k, chk;

	scanf("%d%d", &n, &p);


	k = n * n % p;
	chk = k;
	while (1)
	{
		k = k * n % p;
		
		if (chk == k)
		{
			break;
		}

		i++;
	}

	printf("%d", i+1);

	return 0;
}