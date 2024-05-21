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
    while(t --){
        int n, S;
        cin >> n >> S;
        int a[n];
        input(a,n);
        vector <bool> matrix (S + 1, false);
        matrix[0] = true;
        for(int i = 1; i <= n; i ++){
            for(int j = S; j >= a[i]; j --){
                if(matrix[j - a[i]] == true) matrix[j] = true;
            }
        }
        if(matrix[S]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}