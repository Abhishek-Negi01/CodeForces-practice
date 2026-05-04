#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[n - i - 1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}