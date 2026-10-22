#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int boringapartment[36] = {1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555, 6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999};
    for (int i = 1; i <= t; i++)
    {
        int x = 0, ans = 0, k = 1;
        cin >> x;
        for (int j = 0; j < 36; j++)
        {
            ans = ans + k;
            if(boringapartment[j] == x)
            {
                cout << ans << endl;
                break;
            }
            if(k==4){
                k = 1;
            }
            else{
                k++;
            }
        }
    }
    return 0;
}