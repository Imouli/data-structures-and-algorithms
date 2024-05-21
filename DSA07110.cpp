#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> st;
        bool ok = true;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i] == '[' || str[i] == '{') st.push(str[i]);
            else{
                if(st.size() == 0 && str[i] == ')' || st.size() == 0 && str[i] == '}' || st.size() == 0 && str[i] == ']') ok = false;
                else{
                    if (str[i] == ')' && st.top() == '(')
                        st.pop();
                    if (str[i] == ']' && st.top() == '[')
                        st.pop();
                    if (str[i] == '}' && st.top() == '{')
                        st.pop();
                } 
            }
        }
        if(st.size() > 0) ok = false;
        if(ok) cout << "YES" << endl;
        else cout  << "NO" << endl;
    }
}