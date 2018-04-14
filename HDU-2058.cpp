#include<iostream>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m && n || m)
	{
		int a, d;
		for (d = sqrt(2 * m) + 1; d >= 0; --d)
		{
			a = (m - d * (d + 1) / 2) / (d + 1);
			if (a > 0 && a*(d + 1) + d * (d + 1) / 2 == m)
			{
				cout << "[" << a << "," << a + d << "]" << endl;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
