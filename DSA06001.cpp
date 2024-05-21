#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i ++ ){
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> v2 = v;
        vector<int> v3 = v;
        sort(v2.begin(),v2.end(),greater<int>());
        sort(v3.begin(), v3.end());
        int count = 0;
        for(int i = 0; i < n ; i ++){
            cout << v2[i] << " ";
            count ++;
            if (count == n) break;
            cout << v3[i] << " ";
            count ++;
            if (count == n) break;
        }
        cout << endl;
    }
}