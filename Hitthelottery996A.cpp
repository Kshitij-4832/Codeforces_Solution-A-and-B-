#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int bills = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            n = n - 100;
        }
        else if (n >= 20 && n < 100)
        {
            n = n - 20;
        }
        else if (n >= 10 && n < 20)
        {
            n = n - 10;
        }
        else if (n >= 5 && n < 10)
        {
            n = n - 5;
        }
        else if (n >= 1 && n < 5)
        {
            n = n - 1;
        }
        bills++;
    }
    cout << bills << endl;
    return 0;
}