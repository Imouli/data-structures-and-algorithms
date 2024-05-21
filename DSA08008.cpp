#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
string check(int n)
{
    queue<string> q;
    q.push("1");
    while (!q.empty())
    {
        string res = q.front();
        q.pop();
        ll kq = 0;
        for (int i = 0; i < res.size(); i++)
        {
            kq = kq * 10 + (int)(res[i] - '0');
        }
        if (kq % n == 0)
        {
            return res;
        }
        else
        {
            q.push(res + "0");
            q.push(res + "1");
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << check(n) << endl;
    }
}