#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a = 0, b = 0, modulo = 0;
        cin >> a >> b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            modulo = a%b;
            cout<<b-modulo<<endl;
        }
    }
    return 0;
}