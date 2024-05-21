#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;
ll F[100];
int main(){
    F[0] = 1;F[1] = 2;F[2] = 4;
    for(int i = 3; i <= 92; i ++){
        F[i] = F[i -3] + F[i - 2] + F[i -1];
    }
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        cout << F[n - 1] << endl;
    }
}