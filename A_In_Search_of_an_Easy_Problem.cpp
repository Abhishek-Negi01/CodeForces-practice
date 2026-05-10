#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    int count0 = 0, count1 = 0;
    while (n)
    {
        cin >> num;
        if (num == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
        n--;
    }

    count1 > 0 ? cout << "HARD" << endl : cout << "EASY" << endl;

    return 0;
}