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
    while (i >= 1 && a[i] == 'B'){
        a[i] = 'A';
        i --;
    }
    if (i == 0){
        kt= 0;
    }
    else{
        a[i] = 'B';
    }
}

int main(){
    int t;
    cin >> t;
    while(t --){
    cin >> n;
    kt = 1;
    begin();
    while(kt){
            for(int i = 1; i <= n; i ++){
                cout << a[i] ;
            }
            cout << " ";
        sinh();
    }
    cout << endl;
}
}