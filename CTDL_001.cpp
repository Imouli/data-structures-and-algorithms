#include <bits/stdc++.h>
using namespace std;
int n, a[1000], kt;
void begin()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        kt = 0;
    }
    else
    {
        a[i] = 1;
    }
}
bool check()
{
    int i = 1;
    int j = n;
    while (i <= n / 2 && j >= n / 2)
    {
        if (a[i] != a[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    kt = 1;
    begin();
    while (kt)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
}