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
        for(int i = 0; i < n; i ++){
            int x , y;
            cin >> x >> y;
            v.push_back({x,y});
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