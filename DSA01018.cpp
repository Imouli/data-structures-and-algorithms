#include<bits/stdc++.h>
using namespace std;
int n,k ,a[1000], kt;
void begin(){
    for(int i = 1; i <= k ; i ++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if (i == 0){
        kt = 0;
    }
    else{
        a[i] ++;
        for(int j = i + 1;j <= k; j ++){
            a[j] = a[j - 1] + 1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t --){
        cin >> n >> k;
        vector<int> v3;
        for(int i = 0 ; i < k ; i ++){
            int x;
            cin >> x;
            v3.push_back(x);
        }
        begin();
        kt = 1;
        int checkthdb = 0;
        int yes = 0;
        int vt;
        vector<vector<int>> v1;
        while(kt){
            vector<int> v2;
            for(int i = 1; i <= k; i ++){
                v2.push_back(a[i]);
            }
            if (v2 == v3 && checkthdb == 0){
                yes == 1;
            }
            if (v2 == v3 && checkthdb == 1){
                kt = 0;
            }
            else{
            checkthdb = 1;
            v1.push_back(v2);
            sinh();
            }
        }   
        if(yes == 1){
            for(int i = 1; i <= k ; i ++){
                a[i] = n - k + i;
                cout << a[i] << " ";
            }
        }
        else{
            v3 = v1[v1.size() -  1];
            for(int i = 0 ; i < v3.size(); i ++){
                cout << v3[i] << " ";
            }
        }
        cout << endl;
    }
}
