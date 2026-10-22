#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    while (k != 0)
    {
        int b = n % 10;
        if (b != 0)
        {
            n--;
        }
        else
        {
            n = n / 10;
        }
        k--;
    }
    cout << n << endl;
    return 0;
}