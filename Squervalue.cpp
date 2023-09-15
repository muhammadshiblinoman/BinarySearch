#include <bits/stdc++.h>
using namespace std;
const double esp = 1e-6;
int main()
{
	double n;
	cin >> n;
	double lo = 0, hi = n, mid;
	while (hi - lo > esp)
	{
		mid = (hi + lo) / 2;
		if (mid * mid < n)
		{
			lo = mid;
		}
		else
		{
			hi = mid;
		}
	}
	cout << lo << '\n';
}
