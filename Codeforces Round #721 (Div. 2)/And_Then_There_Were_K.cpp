#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll highestpower(ll n)
{
    ll p = (ll)log2(n);
    return (ll)pow(2, p);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 0)
            cout << 0 << endl;
        ll c = highestpower(n);
        cout << c - 1 << endl;
    }
}