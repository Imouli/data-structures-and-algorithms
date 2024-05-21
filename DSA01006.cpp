#include <bits/stdc++.h>
using namespace std;
int n, a[1000], owari;
void begin()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (a[i] > a[i + 1])
        i--;
    if (i == 0)
        owari = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        begin();
        owari = 1;
        vector<vector<int>> v1;
        while (owari)
        {
            vector<int> v2;
            for(int i = 1; i <= n ; i ++){
                v2.push_back(a[i]);
            }
            v1.push_back(v2);
            sinh();
        }
        reverse(v1.begin(),v1.end());
        for(auto x : v1){
            for(int i = 0; i < x.size();i ++ ){
                cout << x[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }
}
