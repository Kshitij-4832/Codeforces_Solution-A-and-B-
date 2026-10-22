#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, sum = 0, mycoins = 0;
    cin >> n;
    vector<int> coins(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum = sum + coins[i];
    }
    sort(coins.begin(), coins.end());
    int i = coins.size() - 1, result = 0;
    while (mycoins <= sum)
    {
        mycoins += coins[i];
        sum = sum - coins[i];
        i--;
        result++;
    }
    if (result == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}