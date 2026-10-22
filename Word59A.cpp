#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int lcase = 0, ucase = 0, size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ucase++;
        }
        else
        {
            lcase++;
        }
    }
    string ans = "";
    if (lcase >= ucase)
    {
        for (int i = 0; i < size; i++)
        {
            ans.push_back(tolower(s[i]));
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            ans.push_back(toupper(s[i]));
        }
    }
    cout << ans << endl;
    return 0;
}