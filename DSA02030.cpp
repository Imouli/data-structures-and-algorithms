#include<bits/stdc++.h>
using namespace std;
int n , k, a[1000];
char A[1000];
vector<vector<int>> v;

void output(){
    vector<int> v2;
    for(int i = 1; i <= k; i ++){
        A[i] = a[i] + 64;
        cout << A[i];
    }
    cout << endl;
}

void backtracking(int i){
    for(int j = a[i - 1]; j <= n ; j ++ ){
        a[i] = j;
        if (i == k){
            output();
        }
        else{
            backtracking(i + 1);
        }
    }
}
int main(){
    char c;
    cin >> c >> k;
    n = c - 64;
    a[0] = 1;
    backtracking(1);
}