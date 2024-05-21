#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        vector<ll> v2;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll check = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll tich = v[i] * v[i] + v[j] * v[j];
                ll checkchinhphuong = sqrt(tich);
                if (checkchinhphuong * checkchinhphuong == tich)
                {

                    if (binary_search(v.begin() + j + 1, v.end(), checkchinhphuong))
                    {
                        cout << "YES" << endl;
                        check = 1;
                        break;
                    }
                }
            }
        }
        if (check == 0)
        {
            cout << "NO" << endl;
        }
    }
}