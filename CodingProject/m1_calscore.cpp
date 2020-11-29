#include <iostream>

using namespace std;

int main()
{
	int n, i, r = 0, s = 1;
	int A[100];

	cin >> n;

	for (i = 0; i < n; i++)
		cin >> A[i];

	for (i = 0; i < n; i++)
	{ 
		if (A[i] == 1)
		{
			r += s;
			if (A[i] == A[i + 1])
			{
				s++;
			}
			else
				s = 1;
		}
		
	}

	cout << r;


	return 0;
}