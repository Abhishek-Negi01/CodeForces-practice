#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        cin >> a[i].second;
    }

    int reqCapacity = 0;
    int currCapacity = 0;
    for (int i = 0; i < n; i++)
    {
        int left = a[i].first;
        currCapacity -= left;

        int enter = a[i].second;
        currCapacity += enter;

        reqCapacity = max(reqCapacity, currCapacity);
    }

    cout << reqCapacity << endl;
    return 0;
}