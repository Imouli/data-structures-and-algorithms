#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
int n;
bool visited[1000];
int parent[1000];
void setup()
{
    memset(parent, 0, sizeof(parent));
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
}
void DFS(int i)
{
    visited[i] = true;
    for (auto x : List[i])
    {
        if (visited[x] == false)
        {
            parent[x] = i;
            DFS(x);
        }
    }
}
int findback(int i)
{
    if (i == parent[i])
        return i;
    else
        return parent[i] = findback(parent[i]);
}
void input()
{
    cin >> n;
    memset(visited, false, sizeof(visited));
    for(int i = 0; i <= n ; i ++){
        List[i].clear();
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}
bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            DFS(i);
        }
    }
    int ex = findback(1);
    for (int i = 2; i <= n; i++)
    {
        int x = findback(i);
        if (x != ex)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        input();
        setup();
        if (check())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}