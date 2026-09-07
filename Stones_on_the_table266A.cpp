#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    string stone_color = "";
    cin >> n;
    cin >> stone_color;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (stone_color[i] == stone_color[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}