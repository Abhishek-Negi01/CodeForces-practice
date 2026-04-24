#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int score = A[k - 1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= score && A[i] > 0)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}