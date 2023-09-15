#include<bits/stdc++.h>
using namespace std;

int peakElement( vector<int>&arr ) {
  int n = arr.size();
  if( n == 1 ) {
    return 0;
  }
  if( arr[0] > arr[1] ) {
    return 0;
  }
  if( arr[n - 1] > arr[n - 2] ) {
    return n - 1;
  }
  int low = 1 , high = n - 2;
  int ans = -1;
  while( low <= high ) {
    int mid = ( low + high ) / 2;
    if( arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1] ) {
      return mid;
    }
    else if ( arr[mid] > arr[mid - 1] ) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int n; cin >> n;
  vector<int>arr( n );
  for( int i = 0; i < n; i++ ) {
    cin >> n;
  }
  cout << peakElement(arr) << '\n';
}
