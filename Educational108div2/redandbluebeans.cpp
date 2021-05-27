#include <bits/stdc++.h>
#include <math.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll r, b, d;
        cin >> r >> b >> d;
        if (min(r, b) * (d + 1) >= max(r, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}