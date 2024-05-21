#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            v1.push_back(a[i]);
        }
        else
            v2.push_back(a[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),greater<int>());
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
        dem++;
        if (dem == n)
        {
            break;
        }
        cout << v2[i] << " ";
        dem++;
        if (dem == n)
        {
            break;
        }
    }
}