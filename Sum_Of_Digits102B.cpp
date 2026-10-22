#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, ans;
    int count = 0;
    cin >> n;
    ans = n;
    while (ans.length() != 1)
    {
        int sum = 0;
        for (int i = 0; i < ans.length(); i++)
        {
            sum = sum + (int)ans[i] - 48;
        }
        ans = to_string(sum);
        count++;
    }
    cout << count << endl;
    return 0;
}