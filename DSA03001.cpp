#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;
int money[20] = {1000,500,200,100,50,20,10,5,2,1};
int changemoney(int k){
    int dem = 0;
    for(int i = 0; i < 10; i ++){
        while(k >= money[i]){
            dem ++;
            k -= money[i];
        }
    }
    return dem;
}
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        cout << changemoney(n) << endl;
    }
}