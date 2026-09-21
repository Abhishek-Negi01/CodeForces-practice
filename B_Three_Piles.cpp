#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int A, B, T;
        cin >> A >> B >> T;

        int score = abs(A - B);

        if (score < abs(A + T - B))
        {
            score = abs(A + T - B);
        }
        else if (score > abs(B + T - A))
        {
            score = abs(B + T - A);
        }

        cout << score << endl;
    }

    return 0;
}