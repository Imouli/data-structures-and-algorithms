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
        getline(cin >> ws, str);
        stack<char> st;
        int check ;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
                st.push(str[i]);
            if (str[i] == ')')
            {
                check = 1;
                if (st.empty())
                    check = 0;
                else
                {   
                    char top = st.top(); st.pop();

                    while (top != '(')
                    {
                        if (top == '+' || top == '-' || top == '*' || top == '/'){
                            check = 0;
                            top = st.top(),st.pop();
                        }
                    }
                }
                if (check) break;
            }
        }
        if (check)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}