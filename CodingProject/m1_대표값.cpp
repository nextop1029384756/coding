#include <iostream>

using namespace std;

int main(void)
{
	int n, i, k = 0, max = 0, idx;
	int A[101] = { 0 };


	for (i = 0; i < 10; i++)
	{
		cin >> n;
		k += n;
		A[n/10]++;
	}
	for (i = 1; i <= 100; i++)
	{
		if (max < A[i])
		{
			max = A[i];
			idx = i;
		}
	}


	cout << k / 10 << '\n' << idx * 10;



	return 0;
}