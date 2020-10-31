#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, a, b, c, d;

	scanf("%d%d", &x, &y);

	a = y % 10;
	b = (y / 10) % 10;
	c = (y / 100) % 10;
	
	printf("%d\n", x * a);
	printf("%d\n", x * b);
	printf("%d\n", x * c);
	printf("%d\n", x * y);


	return 0;
}