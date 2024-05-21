#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int C[1001][1001];
void input(){
    for(int i = 0; i <= 1000; i ++){
        for(int j = 0; j <= i; j ++ ){
            if (j == 0 || j == i) C[i][j] = 1;
            else {
                C[i][j] = (C[i - 1][j] + C[i-1][j-1]) % mod;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    input();
    while(t --){
        int n,k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
}