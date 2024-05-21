#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin >> t;
    while(t --){
        ll n , k;
        cin >> n >> k;
        ll dem  = 1;
        while( k % 2 == 0){
            k /= 2;
            dem ++;
        }
        cout << dem  << endl;
    }
}