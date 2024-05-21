#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t --){
        string str;
        cin >> str;
        int max = 0;
        for(int i  = 0; i < str.size();i ++){
            char x = str[i];
            int check = count(str.begin(),str.end(),x);
            if (check > max) max = check;
        }
        if (str.size() - max >= max - 1) cout << 1 << endl;
        else cout << -1 << endl; 
    }
}
