#include <bits/stdc++.h>
using namespace std;

int NumberofTimeSorted(int Arr[], int n)
{
    int low = 0, high = n - 1;
    int ans = 0;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (Arr[mid] > Arr[mid + 1] && high > mid)
        {
            ans = mid + 1;
            break;
        }
        else if (Arr[mid] < Arr[mid - 1] && low < mid)
        {
            ans = mid;
            break;
        }
        else if (Arr[high] > Arr[mid])
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
    int n;
    cin >> n;
    int Arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cout << NumberofTimeSorted(Arr, n) << '\n';
}
