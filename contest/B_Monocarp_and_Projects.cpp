#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long x, y, k;
        cin >> x >> y >> k;

        long long diff = y - x;

        long long ans = 0;

        long long last = x + k - 1;

        long long temp = min(diff, last);

        while (x <= temp)
        {
            ans += (diff % x);
            x++;
        }

        ans += (last - x + 1) * diff;

        cout << ans << endl;
    }

    return 0;
}