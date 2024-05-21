#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int n;
    cin >> n;
    int a[n + 1][n + 1] = {};
    for(int i = 1 ; i <= n; i ++ ){
        string str;
        getline(cin >> ws, str);
        vector<int> v;
        string temp;
        stringstream s(str);
        while(s >> temp){
            v.push_back(stoi(temp));
        }
        for(auto x : v){
            a[i][x] = 1;
            a[x][i] = 1;
        }
    }
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}