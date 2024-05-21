#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<string> v;
void input(){
    queue<string> q;
    v.push_back("1");
    q.push("1");
    while(v.size() <= 100000){
        string str = q.front();
        q.pop();
        v.push_back(str + "0");
        v.push_back(str + "1");
        q.push(str + "0");
        q.push(str + "1");
    }
}
int main(){
    int t; cin >> t;
    input();
    while(t --){
        string n;
        cin >> n;
        int check = 0;
        for(int i = 0; i < n.size(); i ++){
            if (n[i] >= '2' || check == 1){
                n[i] = '1';
                check = 1;
            }
        }
        reverse(n.begin(),n.end());
        ll m = 0;
        for(int i = n.size() - 1; i >= 0; i --){
            if(n[i] == '1') m += pow(2,i);
            else m += 0;
        }
        cout << m << endl;
    }
}