#include <iostream>
#include <vector>
using namespace std;
const double INF = 0xfffff;
int N, i, j;
double L, VR, VT1, VT2, C, T, t, t1, s, LL;
double pp[150], dp[150];
//vector <double> p, dp;
/*
第一行是一个整数L代表跑道的总长度
第二行包含三个整数N，C，T，分别表示充电站的个数，电动车冲满电以后能行驶的距离以及每次充电所需要的时间
第三行也是三个整数VR，VT1，VT2，分别表示兔子跑步的速度，乌龟开电动车的速度，乌龟脚蹬电动车的速度
第四行包含了N(N <= 100)个整数p1, p2...pn, 分别表示各个充电站离跑道起点的距离，其中0<p1<p2<...<pn<L
其中每个数都在32位整型范围之内
*/
double min(double t1, double t2)
{
	return t1 < t2 ? t1 : t2;
}
int main()
{
	while (cin >> L)
	{
		cin >> N >> C >> T;
		cin >> VR >> VT1 >> VT2;
		t = L / VR;
		t1 = 0;
		pp[0] = 0;
		//p.push_back(0);
		for (i = 1; i <= N; ++i)
		{
			cin >> pp[i];
			//cin >> s;
			//p.push_back(s);
		}
		pp[N + 1] = L;
		//p.push_back(L);
		dp[0] = 0;
		//dp.push_back(0);
		for (i = 1; i <= N + 1; ++i)
		{
			dp[i] = INF;
			//dp.push_back(INF);
			for (j = 0; j < i; ++j)
			{
				LL = pp[i] - pp[j];
				//LL = p[i] - p[j];
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
