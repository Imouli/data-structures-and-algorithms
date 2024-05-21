#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    stack<int> st;
    while (t--)
    {
        string str;
        cin >> str;
        if (str != "PRINT")
        {
            if (str == "PUSH")
            {
                int x;
                cin >> x;
                st.push(x);
            }
            else
            {
                if(!st.empty()) st.pop();
            }
        }
        else {
            if(st.empty()) cout << "NONE" << endl;
            else{
                cout << st.top() << endl;
            }
        }
    }
}