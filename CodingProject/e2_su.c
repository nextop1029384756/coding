#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, a, pre = 0, q = 0, p = 0, max = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		if (pre <= a) p++;
		else {
			if (max < p) max = p;
			p = 1;
		}

		if (pre >= a) q++;
		else {
			if (max < q) max = q;
			q = 1;
		}

		pre = a;
	}
	
	printf("%d", max);
	
	return 0;
}