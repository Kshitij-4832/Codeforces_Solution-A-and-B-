#include <bits/stdc++.h>
using namespace std;
int main() {
  int t = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int h = 0, m = 0;
    cin >> h >> m;
    int curr = (h*60)+m;
    cout<<1440-curr<<endl;
  }
  return 0;
}