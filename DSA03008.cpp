#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        int a1[n], a2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a2[i];
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back({a1[i], a2[i]});
        }
        int dem = 1;
        sort(v.begin(), v.end(), cmp);
        int i = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].second <= v[j].first)
            {
                dem++;
                i = j;
            }
        }
        cout << dem << endl;
    }
}