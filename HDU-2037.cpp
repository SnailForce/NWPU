#include<iostream>
#include<algorithm>
using namespace std;
struct pro
{
	int start, end;
}p[100];
bool cmp(pro a, pro b)
{
	return a.end < b.end;
}
int main()
{
	int n, num, time;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		num = 0;
		time = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> p[i].start >> p[i].end;
		}
		sort(p, p + n, cmp);
		for (int i = 0; i < n; ++i)
		{
			if (p[i].start >= time)
			{
				++num;
				time = p[i].end;
			}
		}
		cout << num << endl;
	}
	system("pause");
	return 0;
}