#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0 ; i < n; i ++){
            int x;
            cin  >> x;
            s.insert(x);
        }

        if(s.size() == 1){
            cout << -1 << endl;
        } 
        else{
            int count = 0;
            for(auto x : s){
                cout << x << " ";
                count ++;
                if (count == 2) break;
        }
        cout << endl;    
    }
}
}