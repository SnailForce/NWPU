#include<iostream>
using namespace std;
int main()
{
	int k, i;
	while (cin >> k)
	{
		for (i = 0; i <= 64; ++i)
		{
			int sum = 18 + i * k;
			if (sum % 65 == 0)
			{
				cout << i << endl;
				break;
			}
		}
		if (i == 65)
		{
			cout << "no" << endl;
		}
	}
	system("pause");
	return 0;
}
/*
hdu1098 简单题 难度1
输入k，求整数a使得f(x)=5*x^13+13*x^5+k*a*x对任意x都是65的倍数。
方法：
f(x+1)=5*(x+1)^13+13*(x+1)^5+ka*(x+1)=5*(C(13,0)x^13+C(13,1)*x^12+...+C(13,0)*x^0)+13*(C(5,0)*x^5+...+C(5,5)x^0)+ka*x+ka=
f(x)+5*C(13,1)*x^12+...5*C(13,13)+13*C(5,1)*x^4+13*C(5,5)+k*a,对65取余，f(x+1)=13+5+ka=18+ka，是65的倍数。枚举a=1~65，
找到a使得a*k+18是65的倍数，若不存在输出no（a=66,（a*k+18）%65=（a%65*k%65+18）%65，等效于a=1，所以只用枚举1~65）。
*/