#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> &v, int target)
{
	int lo = 0;
	int hi = v.size() - 1;
	int mid = 0;
	while (hi - lo > 1)
	{
		mid = (lo + hi) / 2;
		if (v[mid] < target)
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid;
		}
	}
	if (v[lo] >= target)
		return lo;
	else if (v[hi] >= target)
		return hi;
	else
		return -1;
}
int uperBound(vector<int> &v, int target)
{
	int lo = 0;
	int hi = v.size() - 1;
	int mid = 0;
	while (hi - lo > 1)
	{
		mid = (lo + hi) / 2;
		if (v[mid] <= target)
		{
			lo = mid + 1;
		}
		else
		{
			hi = mid;
		}
	}
	if (v[lo] > target)
		return lo;
	else if (v[hi] > target)
		return hi;
	else
		return -1;
}
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int target;
	cin >> target;
	int lo = lowerBound(v, target);
	cout << lo << " " << (lo != -1 ? v[lo] : -1) << '\n';
	int hi = uperBound(v, target);
	cout << hi << " " << (hi != -1 ? v[hi] : -1) << '\n';
}
