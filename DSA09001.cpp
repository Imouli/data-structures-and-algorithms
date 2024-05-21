#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
int main(){
    int t;
    cin >> t;
    while(t --){
        int n , m;
        cin >> n >> m;
        for(int i = 0; i < m; i ++){
            int x, y;
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        for(int i = 1; i <= n; i ++){
            cout << i << ":" << " ";
            for(auto x : List[i]){
                cout << x << " ";
            }
            cout << endl;
        }
        for(int i = 1; i <= n; i ++){
            List[i].clear();
        }
    }
}