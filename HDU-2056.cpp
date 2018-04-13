#include<iostream>
#include<iomanip>
using namespace std;
void min(double * t1, double * t2)
{
	double t;
	if (*t1 > *t2)
	{
		t = *t1;
		*t1 = *t2;
		*t2 = t;
	}
}
double max(double t1, double t2)
{
	return (t1 > t2) ? t1 : t2;
}
int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double res;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		min(&x1, &x2);
		min(&y1, &y2);
		min(&x3, &x4);
		min(&y3, &y4);
		double x[2], y[2];
		x[0] = max(x1, x3);
		min(&x2, &x4);
		x[1] = x2;
		y[0] = max(y1, y3);	
		min(&y2, &y4);
		y[1] = y2;
		res = (x[1] - x[0])*(y[1] - y[0]);
		if ((x[0] > x[1]) | y[0] > y[1])
		{
			cout << 0.00 << endl;
		}
		else
		{
			cout << setiosflags(ios::fixed) << setprecision(2) << res << endl;
		}
	}
	system("pause");
	return 0;
}
# http://blog.sina.com.cn/s/blog_ab20767501017n1x.html + 无重叠判断即可