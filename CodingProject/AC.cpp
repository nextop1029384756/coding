#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int t, n, i, j, k;
	int X[100] = { 0 };
	string p;

	cin >> t;

	for (i = 0; i < t; i++)
	{
		cin >> p;
		cin >> n;

		for (j = 0; j < n; j++)
		{
			cin >> X[j];
		}

		for (k = 0; k < p.size(); k++)
		{
			if (p[k] == 'R')
			{
				for (j = 0; j < n; j++)
				{
					X[j] = X[n - j];
				}
			}
			if (p[k] == 'D')
			{
				for (j = 0; j < n; j++)
				{
					X[j] = X[j+1];
					n--;
				}
			}
		}
	}
	cout << X;

	return 0;
}