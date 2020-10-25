#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, j, a, b, x, y, w=0;
	int A[100][100] = { 0 };


	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		
		for (a = x; a < x + 10; a++)
			for (b = y; b < y + 10; b++)
				A[a][b] = 1;
	}

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 99; j++)
		{
			if (A[i][j] == 1)
			{
				w++;
			}
		}
	}

	printf("%d", w);

	return 0;
}