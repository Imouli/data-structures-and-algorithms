#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
set<int> List[1000];
int visited[1000];
int bac[1000];
int v, e;
vector<int> mau;
void input()
{
    mau.clear();
    for (int i = 0; i <= v; i++)
    {
        List[i].clear();
    }
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        List[x].insert(y);
        List[y].insert(x);
        bac[x]++;
        bac[y]++;
    }
}
void euler(int i)
{
    stack<int> s;
    s.push(i);
    while(! s.empty()){
        int x = s.top();
        if(!List[x].empty()){
            int y = *List[x].begin();
            s.push(y);
            List[x].erase(y);
            List[y].erase(x);
        }
        else{
            mau.push_back(x);
            s.pop();
        }
    }
}
void checkeuler()
{
    int le = 0;
    int x = 0;
    for (int i = 1; i <= v; ++i)
    {
        if (List[i].size() % 2 != 0)
        {
            x = i;
            le++;
        }
    }
    if (le == 0)
    {
       cout << 2;
    }
    else if (le == 2)
    {
        cout << 1;
    }
    else
        cout << 0;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t --){
        cin >> v >> e;
        input();
        checkeuler();
    }
}