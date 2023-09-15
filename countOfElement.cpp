#include <bits/stdc++.h>
using namespace std;
int FirstOC(int Arr[], int n, int x)
{
    int high = n - 1;
    int low = 0;
    int ans = -1;
    int mid = 0;
    while (high - low >= 1)
    {
        mid = (high + low) / 2;
        if (Arr[mid] == x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (Arr[mid] < x)
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

int LastOC(int Arr[], int n, int x)
{
    int high = n - 1;
    int low = 0;
    int mid = 0, ans = -1;
    while (high - low >= 1)
    {
        mid = (high + low) / 2;
        if (Arr[mid] == x)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (Arr[mid] > x)
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
    int n, x;
    cin >> n >> x;
    int Arr[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    int first = FirstOC(Arr, n, x);
    int last = LastOC(Arr, n, x);
    cout << (last - first) + 1 << '\n';
}
