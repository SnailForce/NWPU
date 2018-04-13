#include<iostream>
using namespace std;
void setf()
{
	int t1[51];
	long t2[51];
	long long t3[51];
	t1[0] = 1;
	t1[1] = 1;
	t2[0] = 1;
	t2[1] = 1;
	t3[0] = 1;
	t3[1] = 1;
	for (int i = 2; i < 51; ++i)
	{
		t1[i] = t1[i - 1] + t1[i - 2];
		t2[i] = t2[i - 1] + t2[i - 2];
		t3[i] = t3[i - 1] + t3[i - 2];
		cout << i << '\t' << t1[i] << '\t' << t2[i] << '\t' << t3[i] << endl;
	}
}
int main()
{
	int n, a, b;
	long long t[51];
	cin >> n;
	setf();
	while (n--)
	{
		cin >> a >> b;
		cout << t[b - a] << endl;
	}
	system("pause");
	return 0;
}
//本程序运行结果显示 int = long = 4字节 long long = 8字节