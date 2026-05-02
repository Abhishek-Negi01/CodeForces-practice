#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n)
    {
        int digit = n % 10;

        if (digit == 4 || digit == 7)
        {
            count++;
        }

        n /= 10;
    }

    count == 4 || count == 7 ? cout << "YES" : cout << "NO";
    return 0;
}