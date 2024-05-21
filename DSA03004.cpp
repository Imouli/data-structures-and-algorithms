#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        sort(a,a + n);
        vector<int> v1,v2;
        for(int i = 0; i < n; i +=2){
            v1.push_back(a[i]);
        }
        for(int i = 1; i< n; i += 2){
            v2.push_back(a[i]);
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        ll x =0;
        ll y= 0;
        for(int i = 0; i < v1.size(); i ++){
            x += v1[i] * pow(10,i);
        }
        for(int i = 0; i < v2.size(); i ++){
            y += v2[i] * pow(10,i);
        }
        cout << x + y << endl;
    }
}