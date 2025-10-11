#ifndef GENERATION_HPP
#define GENERATION_HPP

#include<bits/stdc++.h>
using namespace std;

int a[10000];
int n , check , k;
//initialize -> genarate
void initialize__Genarate_All_Binary_String(){
    for( auto &s : a) s = 0;
}

void initialize__Permutations_With_Repetition(){
    for(int s = 1 ; s <= k ; s++ ) a[s] = s;
}

void initialize__Next_Permutations(){
    for(int s = 1 ; s<= n ;s++) a[s] = s;
}

void genarate_All_Binary_String(){
    int i = n;
    while( i>0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if( i == 0 ) check = 0;
    else a[i] = 1;
}

void next_Permutation_Generations(){
    int i = n-1 ;
    while( i >= 1 && a[i] > a[i+1] ) i--;
    if( i == 0 ) check = 0 ;
    else{
        int j = n;
        while( a[j] < a[i] ) j--;
        swap(a[j] , a[i] );
        reverse(a+i+1 , a+n+1);
    } 
}

void genarate_Permutation_With_Repetition(){
    int i = k;
    while( i > 0 && a[i] == n-k+i ) i--;
    if( i == 0) check = 0;
    else {
        a[i]++;
        for(int s = i+1 ; s <= k ; s++){
            a[s] = a[s-1] +1;
        }
    }
}

#endif