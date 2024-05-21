#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int v, e;
vector<int> List[10000];
bool check[10000];
void Lienthong(int u)
{
    check[u] = false;
    for (auto x : List[u])
    {
        if (check[x] == true)
        {
            Lienthong(x);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(check, true, sizeof(check));
        cin >> v >> e;
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
        int dem = 0;
        for(int i = 1; i <= v; i ++){
            if(check[i] == true){
                Lienthong(i);
                dem ++;
            }
        }
        cout << dem  << endl;
    }
}