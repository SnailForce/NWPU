#include<iostream>
#include<iomanip>
using namespace std;
void setf(double* t)
{
	int i;
	t[1] = 0;
	t[2] = 1;
	for (i = 3; i < 21; ++i)
	{
		t[i] = (t[i - 1] + t[i - 2])*(i - 1);
	}
}
long long nn(int n)
{
	long long sum = 1;
	for (int i = 1; i <= n; ++i)
	{
		sum = sum * i;
	}
	return sum;
}
int main()
{
	int t;
	cin >> t;
	double f[21];
	setf(f);
	while (t--)
	{
		int n;
		long long sum;
		cin >> n;
		sum = nn(n);
		cout << setiosflags(ios::fixed) << setprecision(2) << f[n] * 100 / sum << "%" << endl;
	}
	system("pause");
	return 0;
}
//错排问题D(n) = (D(n-1) + D(n-2))*(n-1)--再看的时候理解不了就死记吧。。