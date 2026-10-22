#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        if (a == b || b == c || c == a)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0;
            vector<int> num = {a, b, c};
            sort(num.begin(), num.end());
            while (num[0] != num[1] && num[1] != num[2] && num[2] != num[0])
            {
                num[0]++;
                num[2]--;
                ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}