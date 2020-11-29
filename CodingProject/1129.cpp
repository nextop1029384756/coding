#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
	int a = 0, b = 0, i, j, x, y;
	char s[100];
	char p[3] = ".\n";

	while (1)
	{
		fgets(s, sizeof(s), stdin);
		
		int len = strlen(s);

		for (i = 0; i < len; i++)
		{
			if (s[i] == '(')
			{
				i = x;
				a++;
				
				if (s[i + 1] == ')')
				{
					a--;
				}
			}
			for (j = 0; j < x; j++)
				if (s[j] == ')')
				a--;
			
			if (s[i] == '[')
			{
				b++;

				if (s[i+1] == ']')
				{
						b--;
				}
			}	
			else
				b--;
		}

		if (a == 0 && b == 0)
		{
			cout << "yes";
		}

		else
		{
			cout << "no";
			a = 0, b = 0;
		}
	
		if (strcmp(s, p)==0)
			break;
	}

	return 0;
}