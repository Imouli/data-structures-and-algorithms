#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<vector<int>> v;
        int n;
        cin >> n;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        int dem = 0;

        while (is_sorted(v1.begin(), v1.end()) == false)
        {
            for (int i = 0; i < v1.size() - 1; i++)
            {
                int j = i + 1;
                if (v1[i] > v1[j])
                {
                    swap(v1[i], v1[j]);
                }
            }
            dem++;
            v.push_back(v1);
        }
        reverse(v.begin(), v.end());
        for (auto x : v)
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