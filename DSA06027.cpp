#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v1;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int buoc = 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] < v[i])
                {
                    swap(v[i], v[j]);
                }
            }
            v1.push_back(v);
        }
        reverse(v1.begin(), v1.end());
        int dem = n - 1;
        for (auto x : v1)
        {
            cout << "Buoc " << dem << ": ";
            dem--;
            for (int i = 0; i < x.size(); i++)
            {
                cout << x[i] << " ";
            }
            cout << endl;
        }
    }
}