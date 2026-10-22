#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    cin >> x1 >> x2 >> x3 >> x4;
    int Max = max({x1, x2, x3, x4});
    int a = Max - x1;
    int b = Max - x2;
    int c = Max - x3;
    int d = Max - x4;
    if(a==0){
        cout<< b << " " << c << " " << d << endl;
    }
    else if(b==0){
        cout<< a << " " << c << " " << d << endl;
    }
    else if(c==0){
        cout<< a << " " << b << " " << d << endl;
    }
    else{
        cout<< a << " " << b << " " << c << endl;
    }
    return 0;
}