#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, i;

	cin >> n;

	vector<int> A(n);

	for (i = 0; i < n; i++)
	{
		A[i] = i+1;
	}

	// 123456
	// 34562
	// 5624
	// 246
	// 4

	while (1)
	{
		for (i = 0; i < n; i++) // 4
		{
			if (i % 2 == 0)
			{
				// 234
				for (size_t j = i; j < A.size()-1; j++) {
					A[j] = A[j + 1];
				}
				A.pop_back();
			}
			

		}
		if (A.size() <= 1) {
			cout << A[0];
			return 0;
		}

		n /= 2;
	}

	return 0;
}