#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
bool check[10000];
void DFS(int u)
{
    check[u] = false;
    cout << u << " ";
    for (auto x : List[u])
    {
        if (check[x] == true)
        {
            DFS(x);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, u;
        cin >> v >> e >> u;
        memset(check,true,sizeof(check));
        for(int i = 0; i <= v; i ++){
            List[i].clear();
        }
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
}