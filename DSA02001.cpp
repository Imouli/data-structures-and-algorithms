#include <bits/stdc++.h>
using namespace std;
int n, a[1000];
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

        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                cout << a[i] << " ";
            }
            else
                cout << a[i];
        }
        cout << "]" << endl;
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
    }
}