#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){
    int t;
    cin >> t;
    while(t --){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        int max = INT_MAX;
        for(int i = 0; i <= n - k; i ++){
            int max = a[i];
            for(int j = i ; j < i + k; j ++){
                if (max < a[j]){
                    max = a[j];
                }
            }
            cout << max << " ";
        }
        cout << endl;
    }
}