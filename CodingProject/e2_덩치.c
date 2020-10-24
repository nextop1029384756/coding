#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int w;
	int h;
	int r;
} student;

int main(void)
{
	int n, i, j;
	student S[50];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d%d", &S[i].w, &S[i].h);
		S[i].r = 1;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (S[i].w > S[j].w && S[i].h>S[j].h) S[j].r += 1;
	}

	for (i = 0; i < n; i++)
		printf("%d", S[i].r);

	return 0;
}