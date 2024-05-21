#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin  >> t;
    while (t --){
        string str;
        getline(cin >> ws, str);
        stringstream s(str);
        stack<string> st;
        string tmp;
        while(s >> tmp){
            st.push(tmp);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout  << endl;
    }
}