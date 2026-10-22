#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = false;
    string input;
    cin >> input;
    int size = input.length();
    int zeros = 0, ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == '0')
        {
            zeros++;
            ones = 0;
        }
        else
        {
            ones++;
            zeros = 0;
        }
        if (ones == 7 || zeros == 7)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}