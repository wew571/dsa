#ifndef PREFIX1D_HPP
#define PREFIX1D_HPP
#include <bits/stdc++.h>
using namespace std;

long long prefix(int l , int r , int x[] , int n){
    if(l<0 || r>100000 || r<l) return -1;

    int pre[100000];
    pre[0] = x[0];
    for(int s = 1 ;s<n ;s++ ){
        pre[s] = pre[s-1] + x[s];
    }
    if(l == 0) return pre[r];
    return pre[r] - pre[l-1];
}

long long prefixv(int l , int r , const vector<int> &v ){
    if(l<0 || r>v.size() || r<l) return -1;
    vector<long long> pre(v.size());
    pre[0] = v[0];
    for(int s = 1 ;s<v.size(); s++){
        pre[s] = pre[s-1] + v[s];
    }
    if(l == 0) return pre[r];
    return pre[r] - pre[l-1];
}
#endif