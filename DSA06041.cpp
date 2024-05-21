#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}
int main(){
    long long t;
    cin >> t;
    while (t --){
        long long n;
        cin >> n;
        vector<long long>v2;
        map<long long,long long> m;
        vector<pair<long long,long long>> v;
        for(long long i = 0; i < n; i ++){
            long long x;
            cin >> x;
            v2.push_back(x);
            m[v2[i]] ++;
        }
        for(auto x : m){
            v.push_back(make_pair(x.first,x.second));
        }
        sort(v.begin(), v.end(),comp);
        for(auto x : v){
                if(x.second > n / 2){
                    cout << x.first  << endl;
                    break;
                }
                else{
                    cout << "NO" << endl;
                    break;
                }
        }
    }
}