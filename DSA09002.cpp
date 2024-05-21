#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
vector<int> List[1000];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string str;
        getline(cin >> ws, str);
        vector<int> v1;
        stringstream s(str);
        string temp;
        while (s >> temp)
        {
            v1.push_back(stoi(temp));
        }
        for (auto x : v1)
        {
            List[i].push_back(x);
        }
    }
    for(int i = 1; i <= n ; i ++){
        for(auto x : List[i]){
            if(i < x){
                cout << i << " " << x << endl;
            } 
        }
    }
}