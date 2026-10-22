#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    char first = toupper(word[0]);
    word[0] = first;
    cout << word << endl;
    return 0;
}