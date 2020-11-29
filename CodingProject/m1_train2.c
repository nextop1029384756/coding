#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(Void)
{
	int n, i, o, a=0, k=0;

	
	for (n = 0; n < 10; n++)
	{
		scanf("%d%d", &o, &i);
		a = a + i - o;
		if (a > k)
		{
			k = a;
		}
	}

	printf("%d", k);

	return 0;
}