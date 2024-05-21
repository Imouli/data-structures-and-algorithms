#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        getline(cin >> ws, str);
        stringstream s(str);
        string temp;
        vector<string> v;
        while (s >> temp)
        {
            v.push_back(temp);
        }
        for (auto x : v)
        {
            string v2 = x;
            string v3 = x;
            prev_permutation(v2.begin(),v2.end());
            if(v2 != x && next_permutation(v3.begin(),v3.end()) == false){
                cout << "BIGGEST" << " ";
            }
            else{
                next_permutation(x.begin(), x.end());
                cout << x << " ";
            }
        }
        cout << endl;
    }
}