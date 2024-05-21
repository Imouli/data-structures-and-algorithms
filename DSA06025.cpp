#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    multiset<int> s;
    int dem = 0;
    for(int i = 0; i < n ;i ++){
        int x;
        cin >> x;
        s.insert(x);
        cout << "Buoc " << dem << ": ";
        dem ++;
        for(auto x : s){
            cout << x << " ";
        }
        cout << endl;   
    }
}