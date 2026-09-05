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

        int num;

        int odd = 0;
        int mod_4_equal_0 = 0;
        int mod_4_equal_2 = 0;

        for (int i = 0; i < n; i++)
        {

            cin >> num;

            if (num % 4 == 0)
            {
                mod_4_equal_0++;
            }
            else if (num % 4 == 2)
            {
                mod_4_equal_2++;
            }
            else if (num % 2)
            {
                odd++;
            }
        }

        int ans = max(odd, max(mod_4_equal_0, mod_4_equal_2));

        cout << ans << endl;
    }

    return 0;
}