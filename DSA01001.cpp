#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void sinh()
{
    int i = v.size() - 1;
    while (i >= 0 && v[i] == 1)
    {
        v[i] = 0;
        i--;
    }
    if (i != -1)
    {
        v[i] = 1;
    }
}
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            int x = str[i] - 48;
            v.push_back(x);
        }
        sinh();
        for (auto x : v)
        {
            cout << x;
        }
        cout << endl;
        v.clear();
    }
}