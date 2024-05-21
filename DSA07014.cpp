#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main(){
    int t;
    cin >>  t;
    while (t --){
        string str;
        cin >> str;
        reverse(str.begin(),str.end());
        stack<ll> st;
        for(int i = 0; i < str.size(); i ++){
            if(str[i] == '+' || str[i] == '-' ||  str[i] == '*' ||  str[i] == '/' || str[i] == '%' || str[i] == '^' ){
                ll y = st.top(); st.pop();
                ll x = st.top(); st.pop();
                if(str[i] == '+'){
                    ll kq = x + y;
                    st.push(kq);
                }
                if(str[i] == '-'){
                    ll kq = y - x;
                    st.push(kq);
                }
                if(str[i] == '*'){
                    ll kq = x * y;
                    st.push(kq);
                }
                if(str[i] == '/'){
                    ll kq = y / x;
                    st.push(kq);
                }
                if(str[i] == '%'){
                    ll kq = y % x;
                    st.push(kq);
                }
                if(str[i] == '^'){
                    ll kq = pow(y,x);
                    st.push(kq);
                }
            }
            else{
                st.push(str[i] - 48);
            }
        }
        cout << st.top() << endl;
    }
}