#include<bits/stdc++.h>
using namespace std;
int check (int n) {
    if (n < 2){
        return 0;
    }
    for (int i = 2 ; i <= sqrt(n); i ++){
        if ( n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while ( t --){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 2; i <= (n/2); i ++ ){
            if (check(i)) {
                int m = n - i;
                if (check(m)){
                    v.push_back(i);
                    v.push_back(m);
                    break;
                }
            }
        }
        if (v.size() == 0){
            cout << "-1" << endl;
        }
        else {
            for (auto x : v){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}