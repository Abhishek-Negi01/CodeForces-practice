#include <iostream>
using namespace std;

int freq[4] = {0};

int main()
{
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == '+')
        {
            continue;
        }
        freq[c - '0']++;
    }

    string ans = "";

    for (char i = '1'; i <= '3'; i++)
    {
        while (freq[i - '0'])
        {
            ans = ans + i;
            ans = ans + "+";
            freq[i - '0']--;
        }
    }

    cout << ans.substr(0, ans.size() - 1) << endl;
    return 0;
}