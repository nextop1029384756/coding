#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i, j;
	char A[5][15] = { 0 };

	for (i = 0; i < 5; i++)
		scanf("%s", A[i]);

	for (i = 0; i < 15; i++ )
	{	
		for (j = 0; j < 5; j++)
		{
			if (i < strlen(A[j]))
				printf("%c", A[j][i]);
		}
	}

	// 0 1 2 3 4 5
	// 6
	// a f z z
	// 5
	// 6
	// 6






	return 0;
}