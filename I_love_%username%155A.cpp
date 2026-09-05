#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<int> points(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }
    int min_points = points[0];
    int max_points = points[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (points[i] < min_points)
        {
            min_points = points[i];
            count++;
        }
        else if (points[i] > max_points)
        {
            max_points = points[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}