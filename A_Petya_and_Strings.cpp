#include <iostream>
using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1 >> s2;

    int n = s1.size();

    for (int i = 0; i < n; i++)
    {
        if (tolower(s1[i]) > tolower(s2[i]))
        {
            cout << 1 << endl;
            return 0;
        }
        else if (tolower(s1[i]) < tolower(s2[i]))
        {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}