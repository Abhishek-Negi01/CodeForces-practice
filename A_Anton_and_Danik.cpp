#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int countA = 0, countD = 0;

    for (char c : s)
    {
        if (c == 'A')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }

    countA > countD ? cout << "Anton" << endl : countD > countA ? cout << "Danik" << endl
                                                                : cout << "Friendship" << endl;

    return 0;
}