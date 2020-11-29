#include <iostream>

using namespace std;

int main(void)
{
	int tmp;
	int i, j, max = 0, x, y;

	for(i=0;i<9;i++)
	{
		for (j = 0; j < 9; j++)
		{
			cin >> tmp;
			if (tmp > max)
			{
				max = tmp;
				x = i+1;
				y = j+1;
			}
		}
	}

	cout << max << '\n' << x << ' ' << y;

	return 0;
}