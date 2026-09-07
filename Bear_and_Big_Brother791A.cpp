#include <bits/stdc++.h>
using namespace std;
int main()
{
    int years = 0;
    int a = 0, b = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        years++;
    }
    cout << years << endl;
    return 0;
}