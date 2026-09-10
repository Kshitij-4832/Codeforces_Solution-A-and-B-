#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n = 0;
        cin >> n;
        vector<int> a(n, 0);
        int Max = INT_MIN, Min = INT_MAX, imax = 0, imin = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if (Max < a[j])
            {
                Max = a[j];
                imax = j;
            }
            if (Min > a[j])
            {
                Min = a[j];
                imin = j;
            }
        }
        int c1 = max(imax, imin) + 1;
        int c2 = n-min(imax, imin);
        int c3 = imax + 1 + n - imin;
        int c4 = imin + 1 + n - imax;
        cout << min({c1, c2, c3, c4}) << endl;
    }
    return 0;
}