#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int c, r, n, x = 1, y = 0, i, j, cnt = 0;
	int sw;
	scanf("%d %d", &c, &r);
	scanf("%d", &n);
	int _c = c, _r = r;

	//��ü �࿭���� �ڸ���
	sw = 1;
	if (n <= _c * _r)
	{
		while (cnt <= _c * _r)
		{
			//�ຯȯ, ������
			for (i = 1; i <= r; i++)//�ݺ�Ƚ��, 6
			{
				y += sw;//1~6
				cnt++;//1~6
				if (cnt == n) break;
			}
			r--;
			if (cnt == n) break;
			if (r <= 0) break;
			//����ȯ, ������
			c--;
			if (c <= 0) break;
			for (i = 1; i <= c; i++)//�ݺ�Ƚ��, 6
			{
				x += sw;//23456
				cnt++;//7891011
				if (cnt == n) break;
			}
			if (cnt == n) break;
			sw *= -1;
		}
		printf("%d %d", x, y);
	}
	else
		printf("0");

	return 0;
}