#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
bool visited[1000];
int v, e, start, owari;
void DFS(int u)
{
    visited[u] = true;
    for (auto x : List[u])
    {
        if (visited[x] == false)
        {
            DFS(x);
        }
    }
}
void check(int x, int y)
{
    memset(visited, false, sizeof(visited));
    DFS(x);
    if (visited[y] == true)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        for (int i = 0; i <= v; i++)
        {
            List[i].clear();
        }
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        int t2;
        cin >> t2;
        while (t2--)
        {
            cin >> start >> owari;
            check(start, owari);
        }
    }
}