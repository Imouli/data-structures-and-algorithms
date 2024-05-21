#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        vector<int> v;
        set<int> s;
        for (int i = 0 ;i < n; i ++){
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
        }
        sort(v.begin(),v.end());
        int min = v[0];
        int max = v[n - 1];
        int  gap = s.size();
        cout << (max - min + 1) - gap << endl;
    }
}