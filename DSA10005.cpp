#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
set<int> List[1000];
int visited[1000];
int bacin[1000];
int bacout[1000];
int v,e;
void input()
{
    memset(bacin,0,sizeof(bacin));
    memset(bacout, 0, sizeof(bacout));
    for (int i = 0; i <= v; i++)
    {
        List[i].clear();
    }
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        List[x].insert(y);
        bacout[x] ++;
        bacin[y] ++;
    }
}
/*void euler(int i)
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
}*/
void checkeuler()
{
    int check = 1;
    for (int i = 1; i <= v; ++i)
    {
        if(bacout[i] == 0 || bacin[i] == 0) {
            check = 0; break;
        }
    }
    cout << check ;
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