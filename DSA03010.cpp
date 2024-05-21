#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int tong ;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        ll tong = 0;
        priority_queue<ll, vector<ll>,greater<ll>> v;
        for(int i = 0;i < n; i ++){
            int x;
            cin >> x;
            v.push(x);
        }
        while(v.size() > 1){
            ll x = v.top(); v.pop();
            ll y = v.top(); v.pop();
            v.push(x + y);
            tong += x + y;
        }
        cout << tong << endl;
    }
}