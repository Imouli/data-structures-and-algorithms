#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i ++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n - 1; i ++){
        int min = i;
        for(int j = i + 1; j < n ; j ++){
            if(v[min]  >  v[j]){
                min = j;
            }
        }
        swap(v[i],v[min]);
        cout << "Buoc " << i + 1 << ": ";
        for (auto x : v){
            cout << x << " ";
        }
        cout << endl;
    }
}