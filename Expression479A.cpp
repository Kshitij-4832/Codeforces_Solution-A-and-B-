#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p = a + (b * c), q = a * b * c, r = a * (b + c), s = (a + b) * c, t = a + b + c;
    cout << max({p, q, r, s, t}) << endl;
    return 0;
}