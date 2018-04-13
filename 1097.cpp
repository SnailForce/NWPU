#include<iostream>
using namespace std;
int main()
{
	int a, b, t[4][10] =
	{
		{0,1,6,1,6,5,6,1,6,1},
		{0,1,2,3,4,5,6,7,8,9},
		{0,1,4,9,6,5,6,9,4,1},
		{0,1,8,7,4,5,6,3,2,9}
	};
	while (cin >> a >> b)
	{
		int x, y;
		x = a % 10;
		y = b % 4;
		cout << t[y][x] << endl;
	}
	system("pause");
	return 0;
}