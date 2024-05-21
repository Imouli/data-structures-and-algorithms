#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_ba int dem = 0;
            while (is_sorted(v.begin(), v.end()) == false)
            {
                for (int i = 0; i < v.si ze() - 1; i++)
                {
                    int min = v[i];
                    int pos = 0;
                    for (int j = i + 1; j < v.size(); j++)
                    {
                        if (v[j] < min)
                        {
                            min = v[j];
                            pos = j;
                        }
                    }
                    if (v[i] > min)
                    {
                        swap(v[i], v[pos]);
                        dem++;
                    }
                }
            }
            cout << dem << endl;
        }
    }