#include <bits/stdc++.h>
using namespace std;
int sumofdigit(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans = ans + (n % 10);
        n = n / 10;
    }
    return ans;
}
int main()
{
    int a = 0;
    cin >> a;
    int p = sumofdigit(a);
    int q = sumofdigit(a + 1);
    int r = sumofdigit(a + 2);
    int s = sumofdigit(a + 3);
    int t = sumofdigit(a + 4);
    if (p % 4 == 0)
    {
        cout << a << endl;
    }
    else if (q % 4 == 0)
    {
        cout << a + 1 << endl;
    }
    else if (r % 4 == 0)
    {
        cout << a + 2 << endl;
    }
    else if (s % 4 == 0)
    {
        cout << a + 3 << endl;
    }
    else
    {
        cout << a + 4 << endl;
    }
    return 0;
}