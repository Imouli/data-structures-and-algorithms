#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
int main(){
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cin >> a[i][j];
            if(a[i][j] == 1) List[i].push_back(j);
        }
    }
    for(int i = 1; i <= n; i ++){
        for(auto x : List[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}