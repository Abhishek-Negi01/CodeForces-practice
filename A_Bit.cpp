#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n;

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "--X")
        {
            x--;
        }
        else if (s == "++X")
        {
            x++;
        }
        else if (s == "X--")
        {
            x--;
        }
        else if (s == "X++")
        {
            x++;
        }
    }

    cout << x << endl;
    return 0;
}