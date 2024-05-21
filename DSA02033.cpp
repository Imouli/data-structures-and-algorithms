#include<bits/stdc++.h>
using namespace std;
int n,a[1000],used[1000];
bool check(int a[]){
    for(int i = 1; i <= n - 1; i ++){
        if (abs(a[i + 1] - a[i]) == 1) return false;
    }
    return true;
}
void output(){
    for(int i = 1;i <= n; i ++){
        cout << a[i];
    }
    cout << endl;
}
void backtracking(int i){
    for(int j = 1; j <= n; j ++){
        if(!used[j]){
            used[j] = true;
            a[i] = j;
            if(i == n){
                if(check(a)){
                    output();
                }
            }
            else {
                backtracking(i + 1);
            }
            used[j] = false;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t --){
        cin >> n;
        memset(used, false,sizeof(used));
        backtracking(1);
        cout << endl;
    }
}