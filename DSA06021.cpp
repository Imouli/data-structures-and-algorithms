#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for(int i = 0; i < n ; i ++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int>::iterator  it;
        it = search_n(v.begin(),v.end(), 1 , k);
        cout <<(it-v.begin()) + 1 << endl;
    }
}