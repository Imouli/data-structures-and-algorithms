#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int n, a[1000];
vector<vector<int>> v;
void input()
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void backtracking(int a[], int n)
{
    if (n >= 1)
    {
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            
            v2.push_back(a[i]);

        }
        v.push_back(v2);
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i] + a[i + 1];
        }
        backtracking(a, n - 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        input();
        backtracking(a, n);
        reverse(v.begin(), v.end());
        for (auto x : v)
        {
            cout << "[";
            for (int i = 0; i < x.size(); i++)
            {
                if (i == x.size() - 1)
                {
                    cout << x[i];
                }
                else
                    cout << x[i] <<  " ";
            }
            cout << "]" << " ";
        }
        v.clear();
        cout << endl;
    }
}
