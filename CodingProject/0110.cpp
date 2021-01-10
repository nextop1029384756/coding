#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;

	vector<string> input(n);
	
	for (int i = 0; i < n; i++)
		cin >> input[i];

	for (int i = 0; i < n; i++)
	{
		int pos = 0; // pos = Ŀ���� ��ġ, len = ���� ��й�ȣ�� ����
		string password;
		for (int j = 0; j < input[i].size(); j++) {
			if (input[i][j] == '<')
			{
				if(pos > 0) pos--;
			}
			else if (input[i][j] == '>') {
				if(pos < password.size()) pos++;
			}
			else if (input[i][j] == '-') { // ���� 1�� ����� �̵�
				password.erase(pos-1, 1);
				if (pos > 0) pos--;
			}
			else { // ���� 1�� �Է��� �̵�
				password.insert(pos, 1, input[i][j]);
				if (pos < password.size()) pos++;
			}
		}
		cout << password << endl;
	}


	return 0;
}