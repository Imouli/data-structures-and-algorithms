#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;
ll F[100];
int Fibonasi(int n , ll k){
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(k <= F[n - 2]) return Fibonasi(n - 2,k);
    return Fibonasi(n - 1, k - F[n - 2] );
}
int main(){
    F[0] = 0; F[1] = 1;
    for(int i = 2; i <= 92; i  ++){
        F[i] = F[i - 2] + F[i - 1];
    }
    int t;
    cin >> t;
    while(t --){
        int n;ll k;
        cin >> n >> k;
        cout << Fibonasi(n, k) << endl;
    }
}