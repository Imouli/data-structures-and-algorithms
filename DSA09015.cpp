#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
int color[1000];
bool DFS(int i)
{
    color[i] = 1;
    for (auto x : List[i])
    {
        if (color[x] == 0)
        {
            if (DFS(x))
                return true;
        }
        else if (color[x] == 1)
            return true;
    }
    color[i] = 2;
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
        }
        int check = 0;
        memset(color, 0, sizeof(color));
        for(int i = 1; i <= v; i ++){
            if(color[i] == 0){
                if(DFS(i)) {
                    check = 1;
                    break;
                }
            }
        }
        if(check == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}