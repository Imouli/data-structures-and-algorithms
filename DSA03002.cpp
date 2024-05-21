#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll min(string a,string b){
    for(int i = 0; i < a.size(); i ++){
        if(a[i] == '6') a[i] --;
    }
    for(int i = 0; i < b.size(); i ++){
        if(b[i] == '6') b[i] --;
    }
    ll x = stoll(a);
    ll y = stoll(b);
    return x + y;
}
ll max(string a,string b){
    for(int i = 0; i < a.size(); i ++){
        if(a[i] == '5') a[i] ++ ;
    }
    for(int i = 0; i < b.size(); i ++){
        if(b[i] == '5') b[i] ++;
    }
    ll x = stoll(a);
    ll y = stoll(b);
    return x + y;
}
int main(){
    string str1;
    string str2;
    cin >> str1 >> str2;
    cout << min(str1,str2) << " " <<  max(str1,str2);
}