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

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        int ans = 0;
        int temp = 0;

        for (int i = 0; i <= n; i++)
        {
            temp += freq[i];

            if (freq[i] && temp >= k * (i + 1))
            {
                ans = i + 1;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}