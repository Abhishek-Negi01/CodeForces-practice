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

        vector<int> arr(n);
        int count_easy = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 0)
            {
                count_easy++;
            }
        }

        if (count_easy < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            if (arr[0] == 0 && arr[n - 1] == 0)
            {
                cout << 0 << endl;
            }
            else if (arr[0] == 0 || arr[n - 1] == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}