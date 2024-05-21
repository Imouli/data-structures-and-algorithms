#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while( t --){
       int n;
       cin >> n;
       string str;
       set<char> s;
       for(int i = 0 ; i < n ; i ++){
        cin >> str;
        for(int i = 0; i < str.size(); i ++){
            s.insert(str[i]);
        }
       }
       for(auto x : s){
        cout << x << " ";
       } 
       cout << endl;
    }
}