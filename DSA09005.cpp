#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
bool visited[1000];
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (auto y : List[x])
        {
            if (visited[y] == false)
            {
                visited[y] = true;
                q.push(y);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(visited, false, sizeof(visited));
        int v, e, u;
        cin >> v >> e >> u;
        for (int i = 0; i <= v; i++)
        {
            List[i].clear();
        }
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x < y)
            {
                List[x].push_back(y);
                List[y].push_back(x);
            }
        }
        BFS(u);
        cout << endl;
    }
}