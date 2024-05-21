#include<bits/stdc++.h>
using namespace std;
int n , k ,a[1000];
vector<string> v;
void begin(){
    for(int i = 1; i <= k; i ++){
        cin >> a[i];
    }
}
void output(){
    for(int i = 1; i <=k; i ++){
        cout << v[a[i] - 1] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n  - k + i; j ++){
        a[i] = j;
        if(i == k){
            output();
        }
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> k;
    string str;
    cin.ignore();
    getline(cin,str);
    stringstream ss (str);
    string temp;
    set<string> s;
    while(ss >> temp){
        s.insert(temp);
    }
    n = s.size();
    for(auto x : s){
        v.push_back(x);
    }
    Try(1);
}
