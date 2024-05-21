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
        int n, s, m;
        cin >> n >> s >> m;
        if (m * s > (s - s / 7) * n)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= s - s / 7; i++)
            {
                if (n * i >= s * m)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}
