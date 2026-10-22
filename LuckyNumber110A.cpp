#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n = 0;
    cin >> n;
    int fours = 0, sevens = 0;
    while (n != 0)
    {
        int b = n % 10;
        if (b == 4)
        {
            fours++;
        }
        else if (b == 7)
        {
            sevens++;
        }
        n = n / 10;
    }
    if(fours + sevens == 4 || fours + sevens == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}