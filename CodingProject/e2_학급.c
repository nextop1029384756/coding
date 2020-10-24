#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, a, b, c, A[3][4] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d%d%d", &a, &b, &c);

		A[0][a]++;
		A[1][b]++;
		A[2][c]++;
	}
	
	A[0][0] = A[0][1] + A[0][2] * 2 + A[0][3] * 3;
	A[1][0] = A[1][1] + A[1][2] * 2 + A[1][3] * 3;
	A[2][0] = A[2][1] + A[2][2] * 2 + A[2][3] * 3;

	int max = 0, idx = 0;
	for (int i = 0; i < 3; i++) {
		if (max < A[i][0]) {
			max = A[i][0];
			idx = i;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 3; i++)
		if (A[i][0] == max) cnt++;
	
	if (cnt == 1)
		printf("%d %d", idx + 1, A[idx][0]);

	else {
		int maxc = 0;
		for (int i = 0; i < 3; i++)
			if (maxc < A[i][3] && A[i][0] == max) {
				maxc = A[i][3];
				idx = i;
			}

		int cnt = 0;
		for (int i = 0; i < 3; i++)
			if (A[i][3] == maxc) cnt++;
	}

	
	{
		int maxb = 0;
		for (int i = 0; i < 3; i++)
			if (maxb < A[i][2] && A[i][0] == max) {
				maxb = A[i][2];
				idx = i;
			}

		int cnt = 0;
		for (int i = 0; i < 3; i++)
			if (A[i][2] == maxb) cnt++;
			
		printf("0 %d", )
	}

	return 0;
}