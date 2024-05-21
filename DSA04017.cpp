#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n + n - 1; i ++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i =0 ; i < n + n - 1; i ++){
            if(v[i] != v[i + n]){
                cout << i + 1 << endl;
                break;
            }
        }
    }
}