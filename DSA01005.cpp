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
        while (owari)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] ;
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
