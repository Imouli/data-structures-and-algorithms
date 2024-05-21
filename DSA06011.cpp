#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        vector<int> v;
        vector<int> v2;
        map<int,int> mp;
        int min = INT_MAX;
        for (int i = 0; i < n; i ++ ){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i = 0; i < v.size() - 1; i ++){
            for (int j = i + 1; j < v.size(); j ++){
                int x = v[i] + v[j];
                v2.push_back(x);
            }
        }
        for(int i = 0; i < v2.size(); i ++){
            mp.insert({abs(v2[i]),v2[i]});
        }
        for(auto x : mp){
            cout << x.second;
            break;
        }
        cout << endl;
    }
}