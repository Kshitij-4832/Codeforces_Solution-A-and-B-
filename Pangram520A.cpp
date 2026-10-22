#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    string input;
    cin >> input;
    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            input[i] = tolower(input[i]);
        }
        vector<int> arr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (int i = 0; i < n; i++)
        {
            arr[((int)input[i] - 97)]++;
        }
        bool check = true;
        for (int itr : arr)
        {
            if (itr == 0)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}