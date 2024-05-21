 #include<bits/stdc++.h>
 using namespace std;
 int n, a[1000], user[1000];
 void output(){
    char A[1000];
    for(int i = 1; i <= n; i ++){
        A[i] = a[i] + 64;
    }
    for(int i = 1; i  <= n; i ++){
        cout << A[i] ;
    }
    cout << " ";
}
void backtracking( int i){
    for(int j = 1; j <= n; j ++){
        if(!user[j]){
            user[j] = true;
            a[i] = j;
            if ( i == n){
                output();
            }
            else{
                backtracking(i + 1);
            }
            user[j] = false; 
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t --){
        string str;
        cin >> str;
        n = str.size();
        memset(user, false, sizeof(user));
        backtracking(1);
        cout << endl;
    }
}
