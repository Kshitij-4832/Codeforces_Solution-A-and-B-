#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0;
    cin >> a;
    while (true)
    {
        int copy = a, ans = 0;
        while (copy != 0)
        {
            ans = ans + (copy % 10);
            copy = copy / 10;
        }
        if (ans % 4 == 0)
        {
            cout << a << endl;
            break;
        }
        a++;
    }
    return 0;
}