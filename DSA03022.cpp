#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
void input(int a[],int n){
for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    input(a,n);
    sort(a, a + n);
    vector<ll> v;
    ll tich1 = a[n - 1] * a[n - 2];
    ll tich2 = a[n - 1] * a[n - 2] * a[n - 3];
    ll tich3 = a[0] * a[1] * a[n - 1];
    ll tich4 = a[0] * a[1];
    v.push_back(tich1);v.push_back(tich2); v.push_back(tich3); v.push_back(tich4);
    ll  max = 0;
    sort(v.begin(),v.end(),greater<ll>());
    cout << v[0] << endl;
}