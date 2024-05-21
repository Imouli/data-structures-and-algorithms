#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin  >> t;
    while (t --){
        int n , k;
        cin  >> n >> k;
        vector<int> v;
        for(int i = 0; i < n ; i ++){
            int x; 
            cin >> x;
            v.push_back(x);
        }
        int dem = count(v.begin(),v.end(), k);
        if(dem != 0) cout << dem << endl;
        else cout << -1 << endl;
    }
}