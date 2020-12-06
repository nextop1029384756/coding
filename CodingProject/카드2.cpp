#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	int n, i;
	int A[100] = {0};

	cin >> n;

	for (i = 0; i < n; i++)
	{
		A[i] = i;
	}

	while (1)
	{
		for (i = 1; i <= n; i++)
		{
			if(i%2==1)
			{
				A[n] = 0;
				A[i + 1] = A[i];
				n--;
			}

			if(i%2==0)
			{
				A[i + 1] = A[i];			n=4 1234 123 n=3 0123 3123 312 31 n=2 031 231 23 
				A[1] = A[n];
				A[n] = 0;
				n--;
			}	

			if (n == 1)
				break;
		}
	}
	
	cout << 'n';


	return 0;
}