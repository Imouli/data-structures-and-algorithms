#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n , m;
        cin >> n >> m;
        int tong = n + m;
        vector<int> v;
        set<int> s;
        map<int,int> mp;
        for (int i = 0; i < tong; i ++){
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(v[i]);
            mp[v[i]] ++;
        }
        for(auto x : s){
            cout << x << " ";
        }
        cout << endl;
        for(auto x : mp){
            if(x.second > 1){
                cout << x.first << " ";
            }
        }
        cout << endl;
    }
}