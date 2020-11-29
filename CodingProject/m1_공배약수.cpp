#include <iostream>

using namespace std;

int main(void)
{
	int a, b, r, n, i;

	cin >> a >> b;
	int _a = a, _b = b;
	while (a % b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}

	printf("%d\n%d", b, _a * _b / b);

	return 0;
}