#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y = 0;
    cin >> y;
    for (int i = y + 1; i <= INT_MAX; i++)
    {
        int cyear = i;
        set<int> st;
        while (cyear != 0)
        {
            int b = cyear % 10;
            st.insert(b);
            cyear = cyear / 10;
        }
        if (st.size() == 4)
        {
            cout << i << endl;
            break;
        }
        st.clear();
    }
    return 0;
}