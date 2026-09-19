#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q = 0;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int c = 0, m = 0, x = 0;
        cin >> c >> m >> x;
        cout << min({c, m, (c + m + x) / 3}) << endl;
    }
    return 0;
}