#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int upperCount = 0;
    int lowerCount = 0;

    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            upperCount++;
        }
        else
        {
            lowerCount++;
        }
    }

    lowerCount >= upperCount ? transform(s.begin(), s.end(), s.begin(), [](char c)
                                         { return tolower(c); })
                             : transform(s.begin(), s.end(), s.begin(), [](char c)
                                         { return toupper(c); });

    cout << s << endl;

    return 0;
}