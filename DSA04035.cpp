#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
ll luythua(ll n, ll k){
    if (k == 0) return 1;
    ll x = luythua(n, k / 2);
    if(k % 2 == 0){
        return (x * x % mod)  % mod;
    }
    return (n * (x * x % mod) % mod) % mod;
}
int main(){
    ll t;
    t = 1;
    while(t){
        ll n ,k;
        cin >> n >> k;
        if ( n == 0 && n == k){
            t =0;
        }
        if (t == 1){
            cout << luythua(n,k) << endl;
        }
    }   
}