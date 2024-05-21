#include<bits/stdc++.h>
using namespace std;
int n, k ,a[1000], kt;
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if (i == 0){
        kt = 0;
    }
    else{
        a[i] ++;
        for(int j = i + 1;j <= k; j ++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t --){
    cin >> n >> k;
    for (int i = 1 ; i <= k ; i ++){
        cin >> a[i];
    }
    kt = 1;
    sinh();
    if(kt == 1){
    for(int i = 1; i <= k ; i++){
        cout << a[i] << " ";
    }
        cout << endl;
    }
    else{
        for(int i = 1; i <= k; i ++){
            cout << i << " ";
        }
        cout << endl;
    }
    }
}