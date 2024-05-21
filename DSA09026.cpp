#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
bool visited[1000];
int thghao[1000];
void BFS(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (!q.empty())
    {
        int n = q.front();
        q.pop();
        for (auto x : List[n])
        {
            if (visited[x] == false)
            {
                q.push(x);
                visited[x] = true;
                thghao[x] = n;
            }
        }
    }
}
void findback(int x, int y)
{
    memset(visited, false, sizeof(visited));
    memset(thghao, 0, sizeof(thghao));
    BFS(x);
    if (visited[y] == false)
        cout << -1;
    else
    {
        vector<int> v;
        while (y != x)
        {
            v.push_back(y);
            y = thghao[y];
        }
        v.push_back(y);
        reverse(v.begin(),v.end());
        for(auto z : v){
            cout << z << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;cin >> t;
    while(t --){
        int v ,e , s,t; cin >> v >> e >> s >> t;
        for(int i  = 0; i <= v; i ++){
            List[i].clear();
        }
        for(int i = 0; i < e; i ++){
            int x, y;
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        findback(s,t);
    }
}