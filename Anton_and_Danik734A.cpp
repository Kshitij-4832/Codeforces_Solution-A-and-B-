#include <bits/stdc++.h>
using namespace std;
int main()
{
    string game_results;
    int n = 0;
    cin >> n;
    cin >> game_results;
    int anton_score = 0, danik_score = 0;
    for (int i = 0; i < n; i++)
    {
        if (game_results[i] == 'A')
        {
            anton_score++;
        }
        else
        {
            danik_score++;
        }
    }
    if (anton_score > danik_score)
    {
        cout << "Anton" << endl;
    }
    else if (danik_score > anton_score)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}