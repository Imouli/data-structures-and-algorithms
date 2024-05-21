#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
void input(int a[],int n){
for(int i = 1; i <= n; i ++){
        cin >> a[i];
    }
}
int main(){
    int t;
    cin >> t;
    while( t --){
        int n, S;
        cin >> n >> S;
        int w[n + 1], v[n + 1];
        input(w, n);
        input(v,n);
        int matrix[n + 1][S + 1];
        memset(matrix, 0,sizeof(matrix));
        for(int i = 1; i <= n; i ++){
            for(int j = 1; j <= S; j ++){
                matrix[i][j] = matrix[i - 1][j];
                if(j >=  w[i]){
                    matrix[i][j] = max(matrix[i][j], matrix[i - 1][j - w[i]] + v[i]);
                }
            }
        }
        cout << matrix[n][S] << endl;
    }
}