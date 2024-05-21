#include<bits/stdc++.h>
using namespace std;
int n, a[1000], k, A[1000];
int tong = 0;
int dem = 0;
vector<int> v;
void output(){
    for(int i = 1; i <= n; i ++){
        if (a[i] == 1){
            tong += A[i];
            v.push_back(A[i]);
        }
    }
    if (tong == k){
        for(auto x : v){
            cout << x << " ";
        }
        tong = 0;
        v.clear();
        dem  ++;
        cout << endl;
    }
    else{
        tong = 0;
        v.clear();
    }
}
void Try(int i){
    for(int j = 0; j <= 1;  j ++){
        a[i] =  j;
        if(i  == n){
            output();
        }
        else{
            Try(i + 1);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i ++){
        cin >> A[i];
    }
    Try(1);
    cout << dem;
}