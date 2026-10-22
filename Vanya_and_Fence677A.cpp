#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, h = 0;
    cin >> n >> h;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    int minwidth = 0;
    for (int i : heights)
    {
        if (i > h)
        {
            minwidth += 2;
        }
        else
        {
            minwidth += 1;
        }
    }
    cout << minwidth << endl;
    return 0;
}