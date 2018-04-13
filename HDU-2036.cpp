#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		double t[100][2];
		for (int i = 0; i < n; ++i)
		{
			cin >> t[i][0] >> t[i][1];
		}
		double sum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (i != n - 1)
			{
				sum += (t[i][0] * t[i + 1][1] - t[i][1] * t[i + 1][0]);
			}
			else
			{
				sum += (t[i][0] * t[0][1] - t[i][1] * t[0][0]);
			}
		}
		sum = sum * 0.5;
		cout << setiosflags(ios::fixed) << setprecision(1) << sum << endl;
	}
	system("pause");
	return 0;
}
//多边形面积0.5*((相邻两个点坐标的x0y1-x1y0)+()+())