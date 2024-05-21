#include<bits/stdc++.h>
using namespace std;
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
        int n , k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        int check = nhiphansearch(a,0,n,k);
        if (check == -1){
            cout << "NO" << endl;
        }
        else cout << check + 1 << endl;
    }
}