#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        queue<int> q;
        while(n --){
            int m;
            cin >> m;
            if(m == 1) cout << q.size() << endl;
            if(m == 2){
                if(q.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            if(m == 3){
                int x; cin >> x;
                q.push(x);
            }
            if(m == 4){
                if(!q.empty()) q.pop();
            }
            if(m == 5){
                if(!q.empty()) cout << q.front() << endl;
                else cout << -1 << endl;
            }
            if(m == 6){
                if(!q.empty()) cout << q.back() << endl;
                else cout << -1 << endl;
            }
        }
    }
}