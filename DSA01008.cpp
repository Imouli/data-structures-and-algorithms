#include<bits/stdc++.h>
using namespace std;
int n, a[1000], kt, k;
void begin(){
    for(int i = 1;i <= n ;i ++){
        a[i] = 0;
    }
}
void sinh(){
    int i  = n;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        i --;
    }
    if (i == 0){
        kt= 0;
    }
    else{
        a[i] = 1;
    }
}
bool check (){
    int dem = 0;
    for(int i = 1; i <= n ; i ++){
        dem += a[i];
    }
    return dem == k;
}
int main(){
    int t;
    cin >> t;
    while( t--){
    cin >> n >> k;
    kt = 1;
    begin();
    while(kt){
        if(check()){
            for(int i = 1; i <= n; i ++){
                cout << a[i] ;
            }
            cout << endl;
        }
        sinh();
    }
}
}