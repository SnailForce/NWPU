#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		char s[50], r[] = "~!@#$%^", *p;
		cin >> s;
		int t = strlen(s), a = 0, b = 0, c = 0, d = 0, sum = 0;
		if (t >= 8 && t <= 16)
		{
			for (int i = 0; i < t; ++i)
			{
				if (s[i] >= 'A'&&s[i] <= 'Z')
				{
					a = 1;
					continue;
				}
				if (s[i] >= 'a'&&s[i] <= 'z')
				{
					b = 1;
					continue;
				}
				if (s[i] >= '0'&&s[i] <= '9')
				{
					c = 1;
					continue;
				}
				p = r;
				while (*p)
				{
					if (s[i] == *p)
					{
						d = 1;
						break;
					}
					++p;
				}
			}
			sum = a + b + c + d;
		}
		if (sum >= 3)
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