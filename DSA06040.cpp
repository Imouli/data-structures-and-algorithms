#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> vbig;
void inputbig(vector<ll> v1,vector<ll>v2,vector<ll> v3){
    for(auto x : v1){
        vbig.push_back(x);
    }
    for(auto x : v2){
        vbig.push_back(x);
    }
    for(auto x : v3){
        vbig.push_back(x);
    }
}
int main(){
    ll t;
    cin >> t;
    while(t --){
        ll n1, n2, n3;
        vector<pair<ll,ll>> v;
        map <ll,ll> m;
        cin >> n1 >> n2 >> n3;
        ll n = n1 + n2 + n3;
        vector<ll> v1,v2,v3;
        set<ll> s1,s2,s3;
        for(ll i = 0; i < n1 ;i ++){
        ll x;
        cin >> x;
        s1.insert(x);
        }
        for(ll i = 0; i < n2 ;i ++){
        ll x;
        cin >> x;
        s2.insert(x);
        }
        for(ll i = 0; i < n3 ;i ++){
        ll x;
        cin >> x;
        s3.insert(x);
        }
        for(auto x : s1){
        v1.push_back(x);
        }
        for(auto x : s2){
        v2.push_back(x);
        }
        for(auto x : s3){
        v3.push_back(x);
        }
        inputbig(v1,v2,v3);
        for(auto x : vbig){
            m[x] ++;
        }
        for(auto x : m){
            if(x.second >= 3){
                v.push_back(make_pair(x.first,x.second));
            }
        }
        sort(v.begin(),v.end());
        if(v.size() != 0){
            for(auto x : v){
                cout << x.first << " ";
            }
        }
        else cout << -1 << " ";
        vbig.clear();
        cout << endl;
    }
}