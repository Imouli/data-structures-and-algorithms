#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1e9 + 7;
void input(int a[], int n){
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
}
int main(){
    int t;
    cin >> t;
    while(t --){
        int n,k;
        int tongmin = 0;
        int tongmax = 0;
        cin >> n >> k;
        int a[n];
        input(a,n);
        sort(a,a + n);
        int MIN = min(k,n - k);
        for(int i = 0; i < MIN; i ++){
            tongmin += a[i];
        }
        for (int i = MIN; i < n; i ++){
            tongmax += a[i];
        }
        cout << tongmax - tongmin << endl;
    }
}