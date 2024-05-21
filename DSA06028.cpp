#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v1;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i ++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int buoc = n - 1;
    for (int i = 0; i < n - 1; i ++){
        int min = i;
        for(int j = i + 1; j < n ; j ++){
            if(v[min]  >  v[j]){
                min = j;
            }
        }
        swap(v[i],v[min]);
        v1.push_back(v);
    }
    reverse(v1.begin(),v1.end());
    for(auto x : v1){
        cout << "Buoc " << buoc << ": ";
        buoc --;
        for(int i = 0; i < x.size(); i++){
            cout << x[i]  << " ";        
        }
        cout << endl;
    }
}