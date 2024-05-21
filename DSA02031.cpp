#include<bits/stdc++.h>
using namespace std;
int n, a[1000],used[1000];
char A[1000];
bool check(int a[]){
    int v1 = 0;
    int v2 = 0;
    for(int i = 1; i <= n; i ++){
        if(a[i] == 1){
            v1 = i;
        }
        if(a[i] == 5){
            v2 = i;
        }
    }
    if(v2 == 0){
        if(v1 == 1 || v1 == n){
            return true;
        }
        else return false;
    }
    else{
        if(v1 == 1 && v2 == n || v1 == n && v2 == 1 ){
            return true;
        }
        else{
            if(abs(v2 - v1) == 1) return true;
            else return false;
        }
    }
}
void output(){
    for(int i = 1; i <= n; i ++){
        A[i] = a[i] + 64;
        cout << A[i] ;
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
    char c;
    cin  >> c;
    n = c - 64;
    memset(used,false, sizeof(used));
    backtracking(1);
}