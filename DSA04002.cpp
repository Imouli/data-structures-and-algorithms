#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
ll luythua(ll n, ll k){
    if ( k == 0){
        return 1;
    }
    ll x = luythua(n, k / 2);
    if (k % 2 == 0){
        return (x * x % mod) % mod;
    }
    return ((x * x) % mod * n) % mod;
}
int main(){
    ll t;
    cin >> t;
    while(t --){
        ll n;
        ll r;
        string str;
        cin >> str;
        n =stoll(str);
        reverse(str.begin(), str.end());
        r = stoll(str);
        cout << luythua(n,r) << endl;
    }
    
}