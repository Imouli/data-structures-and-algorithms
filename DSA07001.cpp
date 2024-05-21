#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int main()
{
    int n = 200;
    vector<int> v;
    while (n--)
    {

        string str;
        cin >> str;
        if (str != "show")
        {
            if (str == "push")
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            else if (str == "pop")
            {
                v.pop_back();
            }
        }
        else if( str == "show"){
            if(v.size() == 0) {
                    cout << "empty";
                    break;
            }
            for(auto x : v){
                cout << x << " ";
            }
            cout << endl;
        }
        else break;
    }
}