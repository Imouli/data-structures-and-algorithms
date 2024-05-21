#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while ( t --){
        int n, k;
        cin >>  n >> k;
        int dem = 1;
        while( k % 2 == 0){
            k /= 2;
            dem ++;
        }
        cout << (char) (dem + 64) << endl;
    }
}