#include<bits/stdc++.h>
using namespace std;
int n , k, a[1000], A[1000];
vector<vector<int>> v;
bool cmp(vector<int> a,vector<int> b){
    return b.size() > a.size();
}
bool check(vector<int> v){
    if (is_sorted(v.begin(),v.end()) == true){
        return true;
    }
    else return false;
}
void input(){
    vector<int> v2;
    for(int i = 1;i <= k; i ++){
        v2.push_back(A[a[i]]);
    }
    if(v2.size() > 1 && check(v2)){
        v.push_back(v2);
    }
}
void output(){
    sort(v.begin(),v.end());
    for(auto x : v){
        for(int i = 0; i < x.size(); i ++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
}
void backtracking(int i){
    for(int j = a[i - 1] + 1; j <=  n + k - i; j ++){
        a[i]= j;
        if (i == k){
            if (1){
            input();
            }
        }
        else backtracking(i + 1);
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> A[i];
    }
    for(k = 2; k <= n - 1; k ++){
        backtracking(1);
    }
    output();
}