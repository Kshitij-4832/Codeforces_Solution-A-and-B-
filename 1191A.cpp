#include <bits/stdc++.h>
using namespace std;
int main() {
  int HP = 0;
  cin >> HP;
  if(HP%4==0){
    cout<<1<<" "<<"A"<<endl;
  }
  else if(HP%4==1){
    cout<<0<<" "<<"A"<<endl;
  }
  else if(HP%4==2){
    cout<<1<<" "<<"B"<<endl;
  }
  else{
    cout<<2<<" "<<"A"<<endl;
  }
  return 0;
}