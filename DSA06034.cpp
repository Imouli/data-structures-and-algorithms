#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n , k;
        cin >> n >> k;
        vector<int> v;
        for(int i = 0 ; i < n ; i ++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int countz  = 0;
        for(int i = 0; i < v.size();  i++){
            int m = k - v[i];
            int dem = count(v.begin() + i + 1, v.end(), m);
            countz += dem;
        }
        cout << countz << endl;
    }
}