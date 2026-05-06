#include <iostream>
using namespace std;
#include <set>

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        string s = to_string(year);
        set<char> digits(s.begin(), s.end());

        if (s.size() == digits.size())
        {
            cout << s << endl;
            break;
        }
    }

    return 0;
}