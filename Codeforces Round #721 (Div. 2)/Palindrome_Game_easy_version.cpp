#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                count++;
        }
        if (count == 0)
            cout << "DRAW" << endl;
        else if (count == 1)
            cout << "BOB" << endl;
        else if (count % 2 == 0)
            cout << "BOB" << endl;
        else
            cout << "ALICE" << endl;
    }
    return 0;
}