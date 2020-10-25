#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// a + b = c
// a = b
// b = c

// a = c - b


int main(void)
{
	int a, b, i, d ,k;

	scanf("%d%d", &d ,&k);

	for (int i = 1; i <= k; i++) {
		b = i;
		int c = k;

		a = c - b;
		for (int j = 0; j < d-3; j++) {
			c = b;
			b = a;
			a = c - b;
			if (a < 0) break;
		}
		if (a < b && a >= 0){
			printf("%d\n%d", a, b);
			break;
		}
	}



	return 0;
}