#include<bits/stdc++.h>
using namespace std;
int checkon(int a[],int n){
    int sum = 0;
    int sumleft = 0;
    for(int i = 1; i <= n; i ++){
        sum += a[i];
    }
    for(int i = 1; i <= n; i ++){
        if(i != 1) sumleft += a[i - 1];
        if(sum - sumleft - a[i] == sumleft){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int a[n];
        for(int i = 1; i <= n; i ++){
            cin >> a[i];
        }
        int check = checkon(a,n);
        if(check == -1){
            cout << -1 << endl;
        }
        else{
            cout << check << endl;
        }
    }
}
