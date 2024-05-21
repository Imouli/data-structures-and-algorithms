#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<ll> v;
void input(){
    queue<string> q;
    v.push_back(9);
    q.push("9");
    while(v.size() <= 10000){
        string str = q.front();
        q.pop();
        v.push_back(stoll(str + "0"));
        v.push_back(stoll(str + "9"));
        q.push(str + "0");
        q.push(str + "9");
    }
}
int main(){
    int t;
    cin >> t;
    input();
    vector<ll> a(100);
    int i = 1;
    while(i != 101){
        for(auto x : v){
            if(x % i == 0){
                a[i] = x;
                i ++;
                break;
            }
        }
    }
    while(t --){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}