#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<string> v;
void input(){
    queue<string> q;
    q.push("1");
    v.push_back("1");
    while(v.size() < 10000){
        string str = q.front();
        q.pop();
        v.push_back(str + "0");
        v.push_back(str + "1");
        q.push(str + "0");
        q.push(str + "1");
    }
}
int main(){
    int t;
    cin >> t;
    input();
    while(t --){
        int n;
        cin >> n;
        for(int i = 0; i < n ; i ++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}