#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;
ll F[100];
char Fibonaci(int n, ll k ){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if (k <= F[n - 2]) return Fibonaci(n - 2,k);
    return Fibonaci(n-1, k - F[n - 2]);
}
int main(){
    F[0] = 0; F[1]= 1;
    for(int i = 2; i <= 92; i ++) F[i] = F[i-2] + F[i - 1];
    int t;
    cin >> t;
    while ( t --){
        int n ;
        ll k;
        cin >> n >> k;
        cout << Fibonaci(n,k) << endl;
    }
}