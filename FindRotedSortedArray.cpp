#include <bits/stdc++.h>
using namespace std;

int FindTheMinElement(vector<int> &arr, int low, int high)
{
    int ans = 0;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] > arr[mid + 1] && high > mid)
        {
            ans = mid + 1;
            break;
        }
        else if (arr[mid] < arr[mid - 1] && mid > low)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < arr[high])
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

int FindTheIndex(vector<int> &arr, int low, int high, int target)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
    vector<int> arr(n + 2);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = FindTheMinElement(arr, 0, n - 1);         // cout << ans << '\n';
    int index1 = FindTheIndex(arr, 0, ans - 1, target); // cout << index1 << '\n';
    int index2 = FindTheIndex(arr, ans, n - 1, target); // cout << index2 << '\n';
    cout << max(index1, index2) << '\n';
}
