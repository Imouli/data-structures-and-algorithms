#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int min = INT_MAX;
        for (int i = 0; i < v.size() - 1; i ++){
            int gap = v[i + 1] -v[i];
            if(gap < min){
                min = gap;
            }
        }
        cout << min << endl;
    }
}