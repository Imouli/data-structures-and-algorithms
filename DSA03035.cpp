#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
void input(int a[],int n){
for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> L(n,1);
    for(int i = 0 ; i < n; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n; i ++){
        for(int j = 0; j < i; j ++){
            if(a[i] - a[j] == 1){
                L[i] = max(L[i],L[j] + 1);
            }
        }
    }
    int max = *max_element(L.begin(), L.end());
    cout << n - max << endl;
}