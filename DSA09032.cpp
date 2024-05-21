#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
int n , m;
int parent[100001];
int mem[100001];
void setup(){
    for(int i = 1; i <= n; i ++){
        parent[i] = i;
        mem[i] = 1;
    }
}
int find(int i){
    if(i == parent[i]) return i;
    else return parent[i] = find(parent[i]);
}
void makefriend(int x,int y){
    x = find(x);
    y = find(y);
    if(x != y){
        if(mem[x] >= mem[y]){
            parent[y] = x;
            mem[x] += mem[y];
        }
        else{
            parent[x] = y;
            mem[y] += mem[x];
        }
    }
}
int main(){
    int t; cin >> t;
    while (t --)
    {
        cin >> n >> m;
        memset(parent,0, sizeof(parent));
        memset(mem,0, sizeof(mem));
        setup();
        while(m --){
            int x, y;
            cin >> x >> y;
            makefriend(x,y);
        }
        cout << *max_element(mem + 0,mem + n + 1) << endl;
    }
    
}