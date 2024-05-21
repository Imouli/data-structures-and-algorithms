#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t --){
        int n, m, k;
        cin >> n >> m >> k;
        int p = n + m;
        int a[p];
        for(int i = 0; i < p ; i ++){
            cin >> a[i];
        }
        sort(a,a + p);
        cout << a[k - 1] << endl;
}
}