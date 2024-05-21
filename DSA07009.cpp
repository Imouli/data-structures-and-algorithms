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
        stack<string> st;
        reverse(str.begin(),str.end());
        for(int i = 0; i < str.size(); i ++){
            if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '^'){
                string x = st.top(); st.pop();
                string y = st.top();st.pop();
                string kq = '(' + x + str[i] + y + ')';
                st.push(kq);
            }
            else st.push(string(1,str[i]));
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}