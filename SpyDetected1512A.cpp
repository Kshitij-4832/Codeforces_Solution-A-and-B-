#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n = 0;
        cin >> n;
        int nonspy = 0;
        unordered_map<int, int> freq;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            if (freq.find(a[i]) != freq.end() && freq[a[i]] > 1)
            {
                nonspy = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nonspy != a[i])
            {
                cout << i+1 << endl;
                break;
            }
        }
        freq.clear();
    }
    return 0;
}