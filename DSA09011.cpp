#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int n, m;
int a[1000][1000];
vector<int> List[1000];
bool visited[1000][1000];
int dx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int dy[8] = {0, -1, 1, 0, -1, 1, -1, 1};
void DFS(int x, int y)
{
    visited[x][y] = true;
    for (int k = 0; k < 8; k++)
    {
        int x1 = x + dx[k];
        int y1 = y + dy[k];
        if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && a[x1][y1] == 1 && visited[x1][y1] == false)
        {
            DFS(x1, y1);
        }
    }
}
void input()
{
    cin >> n >> m;
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
}
void gigachad()
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1 && visited[i][j] == false)
            {
                DFS(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        input();
        gigachad();
    }
}