#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t --){
        vector<int> List[1000];
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < m; i ++){
            int x, y;
            cin >> x >> y;
            List[x].push_back(y);
        }
        for(int i = 1; i <= n; i ++){
            cout << i << ":" << " ";
            for(auto x : List[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}