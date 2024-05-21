#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i  = 0; i < n; i ++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int check = 0;
        for(int i= 0; i < n ; i ++){
            int x = count(v.begin() + i, v.end(), v[i]);
            if (x > 1){
                cout << v[i] << endl;
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "NO" << endl;
        }
    }
}
