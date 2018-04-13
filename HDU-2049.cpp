#include<iostream>
using namespace std;
void setf(long long* t)
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
	long long f[21];
	setf(f);
	while (t--)
	{
		int a, b;
		long long suma, sumb, sumc;
		cin >> a >> b;
		suma = nn(a);
		sumb = nn(b);
		sumc = nn(a - b);
		long long r1, r2, result;
		r1 = suma / sumb / sumc;
		r2 = f[b];
		result = r1 * r2;
		cout << result << endl;
	}
	system("pause");
	return 0;
}
//注意数据类型--int保存不了==遇到大概的问题可以把重要部分输出出来看看是否存在越界的问题