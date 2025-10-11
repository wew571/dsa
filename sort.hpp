#ifndef SORT_HPP
#define SORT_HPP
#include<bits/stdc++.h>
using namespace std;

template <typename T>
void Sort_arr( T a[] , int n){
    for(int s = 0 ;s<n ; s++){
        for( int q = s+1 ; q<n ; q++){
            if(a[s] > a[q]){
                swap(a[s] , a[q]);
            }
        }
    }
}

template<typename T>
void Sort_vector( vector<T> &a){
    int n = a.size();
    for(int s = 0 ; s<n ; s++){
        for( int q = s+1 ; q<n ; q++){
            if(a[s] > a[q]){
                swap(a[s] , a[q]);
            }
        }
    }
}

template<typename T> 
void Selection_Sort_Arr( T a[] , int n ){
    for( int s = 0 ; s<n-1 ;s++){
        int m = s;
        for( int j = s+1 ; j<n ; j++){
            if(a[j] < a[m]){
                m = j;
            }
        }
        swap(a[s] , a[m]);
    }
}

template<typename T>
void Selection_Sort_Vector( vector<T> &a ){
    int num = a.size();
    for(int s = 0 ; s<num-1 ; s++){
        int m = s;
        for(int j = 0 ; j<num ; j++){
            if(a[j] < a[m]){
                m = j;
            }
        }
        swap( a[s] , a[m] );
    }
}

template<typename T>
void Insert_Sort_Arr(T a[] , int n){
    for(int s = 1 ; s<n ; s++){
        int key = a[s];
        int j = s-1;
        while( j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

template<typename T>
void Insert_Sort_Vector( vector<T> &a){
    int n = a.size();
    for(int s = 0 ; s<n ; s++){
        int key = a[s];
        int j = s-1;
        while( j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

template<typename T>
void Bubble_Sort_Arr(T a[] , int n){
    for(int s = 0 ; s<n ;s++){
        for(int j = 0 ; j<n-s-1 ;j++){
            if( a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
    }
}

template<typename T>
void Bubble_Sort_Vector( vector<T> &a){
    int n = a.size();
    for(int s = 0 ; s<n ;s++){
        for( int j = 0 ; j<n-s-1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
    }
}

//low = min 
//high = max

template<typename T>
int paratition_Vector( vector<T> &a , int low , int high ){
    int pivot = a[high];
    int i = low-1;
    for( int j = low ; j < high ; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i] , a[j]);
        }
    }
    swap(a[i+1] , a[high]);
    return i++;
} 

template<typename T>
void quick_Sort_Vector(vector<T> &a , int low , int high){
    if( low < high){
        int pi = paratition_Vector( a , low , high );
        quick_Sort_Vector( a , pi + 1  , high); // right
        quick_Sort_Vector( a , low , pi-1 ); // left 
    }
}

template<typename T>
int paratition_Arr( T a[] , int low , int high ){
    int pivot = a[high];
    int i = low - 1;
    for(int j = low ; j < high ; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i] , a[j]);
        }
    }
    swap(a[i+1] , a[high]);
    return i++;
}

template<typename T>
void quick_Sort_Arr( T a[] , int low , int high){
    if( low < high){
        int pi = paratition_Arr( a , low , high);
        quick_Sort_Arr( a , pi + 1 , high); // right
        quick_Sort_Arr( a , low , pi - 1); // left 
    }
}

template<typename T>
void heaptify_Arr( T a[] , int n , int i){
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int highest = i;
    if( left < n && a[left] > a[highest]) highest = left;
    if( right < n && a[right] > a[highest]) highest = right;
    if( highest != i ){
        swap(a[highest] , a[i]);
        heaptify_Arr(a , n , highest);
    }
}

template<typename T>
void maxHeap_Arr( T a[] , int n){
    for( int i = n/2 - 1 ; i >= 0 ; i--) heaptify_Arr(a , n , i);
}

template<typename T>
void heapSort_Arr( T a[] , int n){
    maxHeap_Arr(a , n);
    for( int i = n-1 ; i >= 0 ; i--){
        swap(a[i] , a[0]);
        heaptify_Arr(a , i , 0);
    }
}

template<typename T>
void heaptify_Vector(vector<T> &a , int n , int i){
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int highest = i;
    if( left < n && a[left] > a[highest]) highest = left;
    if( right < n && a[right] > a[highest]) highest = right;
    if( highest != i){
        swap(a[i] , a[highest]);
        heaptify_Vector(a , n , highest);
    }
}

template<typename T>
void maxHeap_Vector(vector<T> &a , int n){
    for(  int i = n/2 - 1 ; i >= 0 ; i-- ) heaptify_Vector(a , n , i);
}

template<typename T>
void heapSort_Vector(vector<T> &a , int n){
    maxHeap_Vector(a , n);
    for( int i = n - 1 ; i >= 0 ; i--){
        swap(a[i] , a[0]);
        heaptify_Vector(a , i , 0);
    }
}

#endif