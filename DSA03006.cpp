#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        int check = 1;
        for(int i = 0; i < n ; i ++){
            if(a[i] != v[i] && a[i] != v[n- 1 - i]) check = 0;
        }
        if (check == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
