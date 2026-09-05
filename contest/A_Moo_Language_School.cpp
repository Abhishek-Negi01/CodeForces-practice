#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int index = 0;

        int ans = 0;

        while (index < n)
        {
            int j = index;
            int count_1 = 0;

            while (j < n && j < index + k)
            {
                if (s[j] == '1')
                {
                    count_1++;
                }

                j++;
            }

            if (count_1 == k)
            {
                ans++;
            }

            index = index + k;
        }

        cout << ans << endl;
    }

    return 0;
}
