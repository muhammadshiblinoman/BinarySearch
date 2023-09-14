#include <bits/stdc++.h>
using namespace std;

int SearchNearlySortedArry(int arr[], int n, int target)
{
	int low = 0;
	int high = n - 1;
	int ans = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == target)
		{
			ans = arr[mid];
			break;
		}
		else if (arr[mid + 1] == target)
		{
			ans = arr[mid + 1];
			break;
		}
		else if (arr[mid - 1] == target)
		{
			ans = arr[mid - 1];
			break;
		}
		else if (arr[mid] > target)
		{
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
	int arr[n + 3];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << SearchNearlySortedArry(arr, n, target);
}
