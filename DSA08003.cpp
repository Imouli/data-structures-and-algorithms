#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    deque<int> q;
    while( t --){
        string str;
        cin >> str;
        if(str == "PUSHFRONT"){
            int x;
            cin >> x;
            q.push_front(x);
        }
        if(str == "PRINTFRONT"){
            if(!q.empty()){
                cout << q.front()<< endl;
            }
            else cout << "NONE" << endl;
        }
        if(str == "POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        if(str == "PUSHBACK"){
            int x;
            cin >> x;
            q.push_back(x);
        }
        if(str == "PRINTBACK"){
            if(!q.empty()) cout << q.back() << endl;
            else cout << "NONE" << endl;
        }
        if(str == "POPBACK"){
            if(!q.empty()) q.pop_back();
        }
    }
}