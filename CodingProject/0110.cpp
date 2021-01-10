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
		int pos = 0; // pos = 커서의 위치, len = 현재 비밀번호의 길이
		string password;
		for (int j = 0; j < input[i].size(); j++) {
			if (input[i][j] == '<')
			{
				if(pos > 0) pos--;
			}
			else if (input[i][j] == '>') {
				if(pos < password.size()) pos++;
			}
			else if (input[i][j] == '-') { // 문자 1개 지우고 이동
				password.erase(pos-1, 1);
				if (pos > 0) pos--;
			}
			else { // 문자 1개 입력후 이동
				password.insert(pos, 1, input[i][j]);
				if (pos < password.size()) pos++;
			}
		}
		cout << password << endl;
	}


	return 0;
}