#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string n;
  cin >> n;
  bool check = false;
  // Single digit
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '8' || n[i] == '0') {
      check = true;
      cout << "YES" << endl;
      cout << (int)n[i] - 48 << endl;
      break;
    }
  }
  // double digit
  for (int i = 0; i < n.length() && !check; i++) {
    string str;
    str.push_back(n[i]);
    for (int j = i + 1; j < n.length(); j++) {
      str.push_back(n[j]);
      int x = stoi(str);
      if (x % 8 == 0) {
        cout << "YES" << endl;
        cout << x << endl;
        check = true;
        break;
      } else {
        str.pop_back();
      }
    }
    str.pop_back();
  }
  // triple digit
  for (int i = 0; i < n.length() && !check; i++) {
    string str;
    str.push_back(n[i]);
    for (int j = i + 1; j < n.length() && !check; j++) {
      str.push_back(n[j]);
      for (int k = j + 1; k < n.length(); k++) {
        str.push_back(n[k]);
        int x = stoi(str);
        if (x % 8 == 0) {
          cout << "YES" << endl;
          cout << x << endl;
          check = true;
          break;
        } else {
          str.pop_back();
        }
      }
      str.pop_back();
    }
    str.pop_back();
  }
  if (!check) {
    cout << "NO" << endl;
  }
  return 0;
}
