#include <iostream>

using namespace std;

int main(void)
{
	int w, h, p, q, t, i, x = 1, y = 1, a, b;

	cin >> w >> h;
	cin >> p >> q;
	cin >> t;
		
	a = (p + t) % w;
	b = (q + t) % h;

	cout << a << ' ' << b;
	return 0;
}