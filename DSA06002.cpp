#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,k;
        cin >> n >> k;
        multimap<int,int> m;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            m.insert({abs(x - k), x});
        }
        for (auto x : m){
            cout << x.second << " ";
        }
        cout << endl;
    }
}