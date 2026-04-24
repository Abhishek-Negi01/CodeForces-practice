#include <iostream>
using namespace std;
#include <unordered_map>

int main()
{
    unordered_map<char, int> m;
    string s;
    cin >> s;

    for (char c : s)
    {
        m[c]++;
    }

    if (m.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}