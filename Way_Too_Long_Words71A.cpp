#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string input;
        cin >> input;
        int itr = 0;
        for (int j = 0; j < input.length(); j++)
        {
            itr++;
        }
        if (itr > 10)
        {
            string temp = to_string(itr-2);
            string ans = input[0] + temp + input[input.length() - 1];
            cout << ans << endl;
        }
        else
        {
            cout << input << endl;
        }
    }
    return 0;
}