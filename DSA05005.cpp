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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> F(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] >= a[j])
                {
                    F[i] = max(F[i], F[j] + 1);
                }
            }
        }
        cout << n - *max_element(F.begin(), F.end()) << endl;
    }
}