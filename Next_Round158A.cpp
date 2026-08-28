#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> nums(n, 0);
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        mpp[nums[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n && k >= 1; i++)
    {
        if (nums[i] > 0)
        {
            if (mpp.find(nums[i]) != mpp.end())
            {
                ans = ans + mpp[nums[i]];
                k = k - mpp[nums[i]];
                mpp[nums[i]] = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}