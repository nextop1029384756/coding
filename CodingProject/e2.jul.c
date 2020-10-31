#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, m, j;
	int A[100] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		for (j = 0; j < m; j++)
		{
			A[i-j] = A[i-j-1];
		}

		A[i - m] = i + 1;
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}


	return 0;
}