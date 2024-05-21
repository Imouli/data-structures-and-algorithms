#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int buoc = 1;
    for(int i = 0; i < n - 1; i ++){
        for(int j = i + 1 ; j < n ; j ++){
            if (v[j] < v[i]){
                swap(v[i],v[j]);
            }
        }
            cout << "Buoc" << " " << buoc << ": ";
            buoc ++;
            for(auto x : v){
                cout << x << " ";
            }
            cout << endl;
    }
}