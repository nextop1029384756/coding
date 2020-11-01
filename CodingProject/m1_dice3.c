#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, n;
	char A[9];

	for (j = 0; j < 3; j++)
	{
		int max = 0;
		n = 1;
		scanf("%s", A);
		for (int i = 0; i < 8; i++) {
			if (A[i] == A[i + 1])
			{
				n++;
			}
			else {
				if (max < n) max = n;
				n = 1;
			}
		}
		printf("%d\n", max);
	}




	return 0;
}