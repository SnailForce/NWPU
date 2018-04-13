#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*
	char t1[20], t2[20];
	string a, b;
	cin.getline(t1, 20);
	cin.getline(t2, 20);
	getline(cin, a);
	getline(cin, b);
	*/
	// getline(cin, t2)
	long long a, b;
	while (cin >> hex >> a >> b)
	{
		long long res;
		res = a + b;
		if (res >= 0)
		{
			cout << hex << uppercase << res << endl;
		}
		else
		{
			res = -res;
			cout << hex << uppercase << '-' << res << endl;
		}
	}
	system("pause");
	return 0;
}
# https://blog.csdn.net/xujinsmile/article/details/7836413