#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	int a = 0, b = 0, i;
	char s[100];
	char p[3] = ".\n";

	while (1)
	{
		stack <char> st;
		stack <char> st2;
		int answer = 1;
		int answer2 = 1;
		fgets(s, sizeof(s), stdin);
		
		int len = strlen(s);

		for (i = 0; i < len; i++)
		{
			if (s[i] == '(')
			{
				st.push(s[i]);
			}

			else if (s[i] == ')')
			{
				if (st.empty())
				{
					answer = 0;
					break;
				}
				st.pop();
			}

			if (s[i] == '[')
			{
				st2.push(s[i]);
			}

			else if (s[i] == ']')
			{
				if (st2.empty())
				{
					answer2 = 0;
					break;
				}
				st2.pop();
			}

		}

		if (!st.empty())
		{
			answer = 0;
		}

		if (!st2.empty())
		{
			answer2 = 0;
		}

		if (answer == 0 or answer2 == 0)
		{
			cout << "no\n";
		}

		else
		{
			cout << "yes\n";
		}

		if (strcmp(s, p)==0)
			break;
	}

	return 0;
}