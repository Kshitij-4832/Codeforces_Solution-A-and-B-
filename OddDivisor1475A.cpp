#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long int n = 0;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            while (n % 2 == 0)
            {
                n = n / 2;
            }
            if (n > 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}