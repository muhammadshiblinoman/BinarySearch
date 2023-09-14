#include <bits/stdc++.h>
using namespace std;
int first_ocarence(int n, int A[], int x)
{
    int a = 0, b = n - 1;
    int mid = 0;
    int ans = -1;
    while (a <= b)
    {
        mid = (a + b) / 2;
        if (A[mid] == x)
        {
            ans = mid;
            b = mid - 1;
        }
        else if (A[mid] < x)
        {
            a = mid + 1;
        }
        else
            b = mid - 1;
    }
    return ans + 1;
}
int last_ocarance(int n, int A[], int x)
{
    int a = 0;
    int b = n - 1;
    int mid = 0;
    int ans = -1;
    while (a <= b)
    {
        mid = (a + b) / 2;
        if (A[mid] == x)
        {
            ans = mid;
            a = mid + 1;
        }
        else if (A[mid] < x)
            a = mid + 1;
        else
            b = mid - 1;
    }
    return ans + 1;
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A + n);
    int x;
    cin >> x;
    cout << first_ocarence(n, A, x) << '\n';
    cout << last_ocarance(n, A, x) << '\n';
}
