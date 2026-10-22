#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0, n = 0, w = 0;
    cin >> k >> n >> w;
    int total_amount = 0;
    for (int i = 1; i <= w; i++)
    {
        total_amount += (k * i);
    }
    if (total_amount <= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << total_amount - n << endl;
    }
    return 0;
}