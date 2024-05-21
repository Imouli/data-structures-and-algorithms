#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
int main(){
    int n;
    cin >> n;
    multiset<int> s;
    
    int dem = n - 1;
    for(int i = 0; i < n ;i ++){
        vector<int> v2;
        int x;
        cin >> x;
        s.insert(x);
        for(auto x : s){
            v2.push_back(x);
        }
        v.push_back(v2);
    }
    reverse(v.begin(),v.end());
    for(auto x : v ){
        cout << "Buoc " << dem << ": ";
        dem --;
        for(int i = 0 ; i < x.size(); i ++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
}