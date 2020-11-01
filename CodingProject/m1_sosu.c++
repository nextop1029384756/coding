#include <iostream>

using namespace std;

int main(void)
{
	int a, b, n = 0, i, j, k=0;

	cin >> a >> b;

	int min = b;

	for (i = a; i <= b; i++)
	{
		k = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				k++;
			}
			
		}
		if (k == 2) {
			n += i;
			if (i < min) min = i;
		}
	}

	cout << n << '\n' << min;

	return 0;
}