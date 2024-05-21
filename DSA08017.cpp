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
        int n;
        cin >> n;
        vector<string> v;
        ll m = 0;
        for (int i = 1; i <= n; i++)
        {
            m += pow(2, i);
        }
        queue<string> q;
        v.push_back("6");
        v.push_back("8");
        q.push("6");
        q.push("8");
        while (v.size() <= m)
        {
            string str = q.front();
            q.pop();
            v.push_back(str + "6");
            v.push_back(str + "8");
            q.push(str + "6");
            q.push(str + "8");
        }
        reverse(v.begin(), v.begin() + m);
        for (int i = 0; i < m; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}