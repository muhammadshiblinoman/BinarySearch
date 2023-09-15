#include <bits/stdc++.h>
using namespace std;

int CeilNumber(int arr[], int n, int target)
{
	int ans = -1;
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == target)
		{
			ans = arr[mid];
			break;
		}
		else if (arr[mid] > target)
		{
			ans = arr[mid];
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, target;
	cin >> n >> target;
	int arr[n + 2];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int ans = CeilNumber(arr, n, target);
	cout << ans << '\n';
}
