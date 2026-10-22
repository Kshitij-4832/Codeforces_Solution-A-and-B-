#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string b, a;
        cin >> b;
        bool flag = false;
        a = a + "" + b[0] + "" + b[1];
        int size = b.length();
        for (int i = 3; i < size; i = i + 2)
        {
            a = a + "" + b[i];
        }
        cout << a << endl;
    }
    return 0;
}