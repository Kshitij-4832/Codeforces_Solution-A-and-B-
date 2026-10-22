#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ans;
    cin >> s;
    int size = s.length();
    vector<char> nums;
    for (int i = 0; i < size; i++)
    {
        if (s[i] != '+')
        {
            nums.push_back(s[i]);
        }
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i != nums.size() - 1)
        {
            ans = ans + nums[i] + '+';
        }
        else
        {
            ans = ans + nums[i];
        }
    }
    cout << ans << endl;
    return 0;
}