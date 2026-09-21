#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;

        bool flag = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] - '0' > s[i + 1] - '0')
            {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << ans << endl;
            continue;
        }

        if (s[0] == '1')
        {
            for (char c : s)
            {
                if (c == '0')
                { // replace with OR
                    ans++;
                }
            }
        }
        else
        {

            ans = n;
            int zeroes = 0;
            int ones = 0;

            for (char c : s)
            {
                if (c == '0')
                {
                    zeroes++;
                }
            }

            for (char c : s)
            {
                if (c == '0')
                {
                    zeroes--; // remove right zeroes
                }
                else
                {
                    ones++; // add left ones
                }

                ans = min(ans, ones + zeroes);
            }
        }

        cout << ans << endl;
    }

    return 0;
}