#include<bits/stdc++.h>
using namespace std;
int n,cot[1000], cheo1[1000], cheo2[1000],a[1000];
int dem = 0;
void backtracking(int i ){
    for(int j = 1; j <= n; j ++){
        if(cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0){
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
            a[i] = j;
            if (i == n){
                dem ++;
            }
            else{
                backtracking( i + 1);
            }
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t --){
        cin >> n;
        memset(cot, 0,sizeof(cot));
        memset(cheo1, 0,sizeof(cheo1));
        memset(cheo2, 0,sizeof(cheo2));
        backtracking(1);
        cout << dem << endl;
        dem = 0;
    }
}