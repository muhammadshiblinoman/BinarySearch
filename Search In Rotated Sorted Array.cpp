#include<bits/stdc++.h>
using namespace std;

int rotatedSearch( vector<int>&arr , int k ) {
  int low = 0; int high = arr.size() - 1;
  while( low <= high ) {
    int mid = ( low + high ) / 2;
    if( arr[mid] == k ) {
      return mid;
    }
    if( arr[mid] >= arr[low] ) {
      if( arr[low] <= k && arr[mid] >= k ) {
        high = mid - 1;
      }
      else {
        low = mid + 1;
      }
    }
    else {
      if( arr[mid] <= k && k <= arr[high] ) {
        low = mid + 1;
      }
      else {
        high = mid - 1;
      }
    }
  }
  return -1;
}

int main() {
  int n; cin >> n;
  int k ; cin >> k;
  vector<int>arr(n);
  for( int i = 0; i < n; i++ ) {
    cin >> arr[i];
  }
  cout << rotatedSearch( arr , k ) << '\n';
}
