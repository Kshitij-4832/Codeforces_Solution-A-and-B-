#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string opt = "";
        cin >> opt;
        if (opt[0] == 'X' || opt[2] == 'X')
        {
            if (opt[1] == '+')
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}