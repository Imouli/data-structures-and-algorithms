#include <bits/stdc++.h>
using namespace std;
int n, a[1000], A[1000], k;
vector<vector<int>> strong;
void output()
{
    int tong = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            tong += A[i];
            v.push_back(A[i]);
        }
    }
    if (tong == k)
    {   
        sort(v.begin(),v.end());
        strong.push_back(v);
    }
}
void outputcheck()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void backtracking(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            output();
        }
        else
        {
            backtracking(i + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        backtracking(1);
        sort(strong.begin(), strong.end());
        if (strong.size() == 0)
        {
            cout << -1 ;
        }
        else
        {
            for (auto x : strong)
            {
                cout << "[";
                for (int i = 0; i < x.size(); i++)
                {
                    if (i == x.size() - 1)
                        cout << x[i];
                    else
                        cout << x[i] << " ";
                }
                cout << "]" << " ";
            }
        }
        strong.clear();
        cout << endl;
    }
}