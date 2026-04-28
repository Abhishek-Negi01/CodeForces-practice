#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string seq;
    cin >> seq;

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (seq[i] == seq[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}