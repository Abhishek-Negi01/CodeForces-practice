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

        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        int ans = 0;

        ans = max(ans, n - p1);
        ans = max(ans, n - p2);
        ans = max(ans, n - p3);

        cout << ans << endl;
    }

    return 0;
}