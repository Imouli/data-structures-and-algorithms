#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int m , n;
        cin >> m >> n;
        vector<long long> v1,v2;
        for (int i = 0; i < m; i ++){
            int x;
            cin >> x;
            v1.push_back(x);        
        }
        for (int i = 0; i < n ; i++){
            int x;
            cin >> x;
            v2.push_back(x);
        }
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end(),greater<long long>());
        long long kq = v1[0] * v2[0];
        cout << kq << endl;
    }
}