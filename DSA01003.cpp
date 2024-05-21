#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    int t;
    cin >> t;
    while(t --){
        cin >> n;
        int a[1000];
        for(int i = 0 ; i < n ; i ++){
            cin >> a[i];
        }
        next_permutation(a, a + n );
        for(int i = 0 ; i < n; i ++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}