#include <iostream>
#include <vector>
using namespace std;
//这次的写的真的是智障==，一直使用同一个STL导致数组无限增长，所采用的数据也就错了。。每次重开一个就好了。。很尴尬
const double INF = 0xfffff;
int N, i, j;
double L, VR, VT1, VT2, C, T, t, t1, s, LL;

double min(double t1, double t2)
{
	return t1 < t2 ? t1 : t2;
}
int main()
{
	while (cin >> L)
	{
		vector <double> p, dp;
		cin >> N >> C >> T;
		cin >> VR >> VT1 >> VT2;
		t = L / VR;
		t1 = 0;
		p.push_back(0);
		for (i = 1; i <= N; ++i)
		{
			cin >> s;
			p.push_back(s);
		}
		p.push_back(L);
		dp.push_back(0);
		for (i = 1; i <= N + 1; ++i)
		{
			dp.push_back(INF);
			for (j = 0; j < i; ++j)
			{
				LL = p[i] - p[j];
				if (LL > C)
				{
					t1 = C / VT1 + (LL - C) / VT2;
				}
				else
				{
					t1 = LL / VT1;
				}
				t1 += dp[j];
				if (j > 0)
				{
					t1 += T;
				}
				dp[i] = min(dp[i], t1);
			}
		}
		if (t > dp[N + 1])
		{
			cout << "What a pity rabbit!" << endl;
		}
		else
		{
			cout << "Good job,rabbit!" << endl;
		}
	}
	system("pause");
	return 0;
}
