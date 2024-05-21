#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int A[101][101] ;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= 101; i ++){
        for(int j = 1; j <= 101; j ++){
            A[i][j] = 1000000000;
        }
        A[i][i] = 0;
    }
    for (int i = 1; i <= m ; i++){
        int u, v ,c;
        cin >> u >> v >> c;
        A[u][v] = c;
        A[v][u] = c;
    }
    for(int k = 1; k <= n; k ++){
        for(int i = 1; i <= n; i ++){
            for(int j = 1; j <= n; j ++ ){
                if(A[i][j] > A[i][k] + A[k][j]){
                    A[i][j] = A[i][k] + A[k][j];
                }
            }
        }
    }
    int t;
    cin >> t;
    while(t --){
        int i,j ; cin >> i >> j;
        cout << A[i][j] << endl;
    }
}