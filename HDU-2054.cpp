#include <iostream>
using namespace std;
char s1[100000], s2[100000];
void format_string(char * s)
{
	int flag = 0;
	int t = strlen(s);
	for (int i = 0; i < t; ++i)
	{
		if (s[i] == '.')
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		for (int i = t - 1; i > 0; --i)
		{
			if (s[i] == '0')
			{
				s[i] = '\0';
				--t;
			}
			else
			{
				break;
			}
		}
	}
	if (s[t - 1] == '.')
	{
		s[t - 1] = '\0';
	}
}
int main()
{
	while (cin >> s1 >> s2)
	{
		format_string(s1);
		format_string(s2);
		if (strcmp(s1, s2) == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	system("pause");
	return 0;
}
//去掉后导0