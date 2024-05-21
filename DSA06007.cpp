#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> m = v;
        sort(m.begin(), m.end());
        int dau = 0;
        int cuoi = 0;
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != m[i])
            {
                dau = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != m[i])
            {
                cuoi = i + 1;
                break;
            }
        }
        cout << dau << " " << cuoi << endl;
    }
}