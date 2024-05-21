#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
int visited[1000];
int thghao[1000];
bool DFS(int dinh)
{
    visited[dinh] = true;
    for (auto x : List[dinh])
    {
        if (visited[x] == false)
        {
            thghao[x] = dinh; 
            if (DFS(x)){
                return true;
            }
        }
        else if (x != thghao[dinh]  && x == 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
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
        memset(visited,false,sizeof(visited));
        memset(thghao,0, sizeof(thghao));
        int check = 0;
        for(int i = 1; i <= 1; i ++){
            if(!visited[1]){
                if(DFS(1)){
                    check = 1;
                    cout << "YES";
                    break;
                }
            }
        }
        if(check == 0) cout << "NO";
        cout << endl;
    }
}