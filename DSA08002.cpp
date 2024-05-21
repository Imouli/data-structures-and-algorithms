#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    queue<int> q;
    while(t --){
        string str;
        cin >> str;
        if(str == "PUSH"){
            int x;
            cin >> x;
            q.push(x);
        }
        if(str == "POP"){
            if(!q.empty()) q.pop();
        }
        if(str == "PRINTFRONT"){
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else cout << "NONE" << endl;
        }
    }
}