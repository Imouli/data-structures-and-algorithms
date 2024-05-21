#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
bool visited[1001];
int thghao[1001];
void DFS(int u)
{
    visited[u] = true;
    for (auto x : List[u])
    {
        if (visited[x] == false)
        {
            thghao[x] = u;
            DFS(x);
        }
    } 
}
void Findback(int x, int y)
{
    memset(visited, false, sizeof(visited));
    memset(thghao, 0, sizeof(thghao));
    DFS(x);
    if (visited[y] == false)
    {
        cout << -1;
    }
    else
    {
        vector<int> mau;
        while (y != x)
        {
            mau.push_back(y);
            y = thghao[y];
        }
        mau.push_back(y);
        reverse(mau.begin(), mau.end());
        for (auto z : mau)
        {
            cout << z << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, s, t;
        cin >> v >> e >> s >> t;
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
        
        Findback(s,t);
    }
}