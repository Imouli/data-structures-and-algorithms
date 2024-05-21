#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i ++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int dem = 1;
    
    while(is_sorted(v.begin(),v.end()) == false){
        for(int i = 0 ;i < v.size()- 1;i ++){
            int j = i + 1;
            if(v[i] > v[j]){
                swap(v[i], v[j]);
            }
        }
        cout << "Buoc " << dem << ": ";
        dem  ++ ;
        for(auto x : v){
            cout <<  x <<  " ";
        }
        cout << endl;
    }
}