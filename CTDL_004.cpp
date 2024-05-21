#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000], A[1000];
vector<vector<int>> v;
bool check(int a[]){
    vector<int> v1;
    for(int i = 1; i <= k ; i ++){
        v1.push_back(A[a[i]]);
    }
    if(is_sorted(v1.begin(),v1.end()) == true){
        return true;
    }
    else return false;
}
void input(){
    vector<int> v2;
    for(int i = 1;i <= k; i ++){
        v2.push_back(A[a[i]]);
    }
    v.push_back(v2);
}
void output(){
    cout << v.size();
}
void backtracking(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
        a[i] = j;
        if( i == k){
            if(check(a)){
                input();
            }
        }
        else{
            backtracking( i + 1);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i ++){
        cin >> A[i];
    }
    backtracking(1);
    output();
}
