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
        int count_0 = 0;
        int count_1 = 0;

        while (n--)
        {
            cin >> num;
            if (num == 0)
            {
                count_0++;
            }
            else
            {
                count_1++;
            }
        }

        if (count_1 >= count_0)
        {
            cout << "Bessie" << endl;
        }
        else
        {
            cout << "Elsie" << endl;
        }
    }

    return 0;
}