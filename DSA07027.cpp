#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int nhiphansearch(int a[],int s, int e,int k){
    if(e >= s){
    int mid = s + (e - s) / 2;
    if(a[mid] == k) return mid;
    if (a[mid] > k) return nhiphansearch(a,s,mid - 1,k);
    return nhiphansearch(a,mid + 1,e,k);
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> s;
        for(int i = 0;i < n; i ++){
            cin >> a[i];
            s.insert(a[i]);
        }
        vector<int> c;
        for(auto x : s){
            c.push_back(x);
        }
        stack<int> st;
        int b[n];
        for(int i = 0; i < c.size(); i ++){
            b[i] = c[i];
        }
        for(int i = 0; i < n; i ++){
            int check = nhiphansearch(b,i + 1, c.size(),a[i]);
            cout << check << " ";
            if(check == c.size() - 1) cout << -1 << " ";
            else cout << b[check + 1] << " "; 
        }
        cout << endl;
    }
}