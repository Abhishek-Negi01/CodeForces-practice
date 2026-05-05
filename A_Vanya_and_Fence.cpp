#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int height;
    int ans = 0;
    while (n)
    {
        cin >> height;
        if (height > h)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
        n--;
    }
    cout << ans << endl;
    return 0;
}