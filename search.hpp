#ifndef SEARCH_HPP
#define SEARCH_HPP

#include<bits/stdc++.h>
#include"sort.hpp"
using namespace std;

template<typename T>
bool linear_Search_Arr( T a[] , int x ){
    for(auto s : a){
        if(s == x){
            return true;
        }
    }
    return false;
}

template<typename T>
bool linear_Search_vector(vector<T> a , int x){
    for(auto s : a){
        if(s == x){
            return true;
        }
    }
    return false;
}

template<typename T>
bool binary_Search_arr( T a[] , int n , int x){
    Sort_arr(a , n );
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = (left + right)/2;
        if(a[mid] == x) return true;
        else if (a[mid] > x ) right = mid-1;
        else left = mid+1; 
    }
    return false;
}

template<typename T>
bool binary_Search_vector(vector<T> a , T x){
    Sort_vector(a);
    int left = 0 ;
    int right = a.size()-1;
    while( left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x) return true;
        else if (a[mid] > x) right = mid-1;
        else left = mid + 1;
    }
    return false;
}

#endif