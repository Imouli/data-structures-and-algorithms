#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int n,  kt;
char  a[1000];
void begin(){
    for(int i = 1;i <= n ;i ++){
        a[i] = 'A';
    }
}
void sinh(){
    int i  = n;
    while (i >= 1 && a[i] == 'H'){
        a[i] = 'A';
        i --;
    }
    if (i == 0){
        kt= 0;
    }
    else{
        a[i] = 'H';
    }
}
bool checkdaucuoi(){
    if(a[1] == 'H' && a[n] == 'A'){
        return true;
    }
    else 
     return false;
}
bool checkH(){
    for(int i = 1; i <= n; i++){
        if(a[i] == 'H'){
            if (i == 1){
                if (a[i] == a[i + 1]){
                    return false;
                }
            }
            if(i  ==  n){
                if(a[i] == a[i-1]){
                    return false;
                }
            }
            else{
                int j = i - 1;
                int k = i + 1;
                if(a[j] == 'H' || a[k] == 'H'){
                    return false;
                }
            }
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t --){
    cin >> n;
    kt = 1;
    begin();
    while(kt){
        if( checkdaucuoi() && checkH()){
            for(int i = 1; i <= n; i ++){
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
}
}