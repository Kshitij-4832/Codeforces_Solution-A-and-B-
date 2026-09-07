#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> tram_stops(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> tram_stops[i][0] >> tram_stops[i][1];
    }
    int sum = 0, max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum - tram_stops[i][0] + tram_stops[i][1];
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << endl;
    return 0;
}