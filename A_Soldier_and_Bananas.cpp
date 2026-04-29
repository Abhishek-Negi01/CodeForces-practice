#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int requiredDollars = k * (w * (w + 1) / 2);

    int borrowFromFriend = requiredDollars - n;

    borrowFromFriend > 0 ? cout << borrowFromFriend << endl : cout << 0 << endl;

    return 0;
}