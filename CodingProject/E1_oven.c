//e1 ¿Àºì½Ã°è
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, min, pmin;

	scanf("%d%d%d", &hour, &min, &pmin);

	hour = hour + (min + pmin) / 60;
	min = (min + pmin) % 60;

	printf("%d %d", hour, min);

	return 0;
}