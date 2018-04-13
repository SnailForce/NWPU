#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, t[100];
	cin >> n;
	t[0] = 1;
	t[1] = 2;
	while (n--)
	{
		int m;
		cin >> m;
		if (m <= 2)
		{
			cout << t[m - 2] << endl;
		}
		else
		{
			for (int i = 2; i < m; ++i)
			{
				t[i] = t[i - 1] + t[i - 2];
			}
			cout << t[m - 2] << endl;
		}
	}
	system("pause");
	return 0;
}
//1 2 3 5 8 13数列
//原理上需要打表，不然过不了==可是AC了--补充一个打表的代码吧。。
	#include<iostream>
	#include<algorithm>
	using namespace std;
	void setf(int* t)
	{
		int i;
		t[0] = 1;
		t[1] = 1;
		t[2] = 2;
		for (i = 3; i < 100; ++i)
		{
			t[i] = t[i - 1] + t[i - 2];
		}
	}
	int main()
	{
		int n, t[100];
		cin >> n;
		setf(t);
		while (n--)
		{
			int m;
			cin >> m;
			cout << t[m - 1] << endl;
		}
		system("pause");
		return 0;
	}