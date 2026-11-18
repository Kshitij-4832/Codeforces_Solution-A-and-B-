#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (long long int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0;
  cin >> n;
  vector<long long int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    long long int element = arr[i];
    bool flag = false;
    long long int start = 1, end = element;
    while (start <= end) {
      long long int mid = (start + end) / 2;
      if (mid == element / mid && element % mid == 0) {
        flag = true;
        break;
      } else if (mid > element / mid) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
    if (flag) {
      int root = sqrt(element);
      if (isPrime(root)) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}