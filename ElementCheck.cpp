#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int Arr[n + 1];
	for (int i = 0; i < n; i++)
		cin >> Arr[i];
	int to_find;
	cin >> to_find;
	int fo = 0;
	int hi = n - 1;
	while (hi - fo > 1)
	{
		int mid = (fo + hi) / 2;
		if (Arr[mid] < to_find)
		{
			fo = mid + 1;
		}
		else
		{
			hi = mid - 1;
		}
	}
	if (Arr[fo] == to_find)
	{
		cout << fo + 1 << '\n';
	}
	else if (Arr[hi] == to_find)
	{
		cout << hi + 1 << '\n';
	}
	else
	{
		cout << "NOT FOUND" << '\n';
	}
}
