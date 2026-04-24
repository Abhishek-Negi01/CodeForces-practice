#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}