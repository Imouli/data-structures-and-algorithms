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
        stack<char> st;
        st.push(str[0]);
        for(int i = 1; i < str.size(); i ++){
            if(!st.empty() && str[i] == ')' && st.top() == '(') st.pop();
            else st.push(str[i]);
        }
        int dem1 = 0;
        int dem2 =0;
        while(!st.empty()){
            if(st.top() == '(') {
                dem1 ++ ;
                st.pop();
            }
            else{
                dem2 ++;
                st.pop();
            }
        }
        cout << dem1/2 + dem2 /2  + dem1 % 2 + dem2 % 2 << endl;
    }
}