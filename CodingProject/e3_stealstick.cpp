#include <iostream>
using namespace std;

int main(void)
{
	int r = 0, n = 0;
	string A;

	cin >> A;
	for(int i = 0; i < A.size(); i++)
	{
		if (A[i] == '(' && A[i + 1] == ')')
			r += n;
		else if (A[i] == '(')
			n++;
		else if (A[i] == ')' && A[i + 1] != '(')
		{
			n--;
			r += 1;
		}
	}

	cout << r;

	return 0;
}