#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
void input(int a[], int n){
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
}
ll sum (int a[], int n){
    ll tong = 0;
    for(int i = 0; i < n; i ++){
        tong = (tong % mod + (a[i] * i) % mod)  % mod;
    }
    return tong;
}
int main(){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;   
        int a[n];
        input(a,n);
        sort(a, a + n);
        cout << sum(a,n) << endl;
    }
}