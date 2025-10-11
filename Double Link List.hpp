#ifndef DOUBLE_LINK_LIST_HPP
#define DOUBLE_LINK_LIST_HPP

#include<bits/stdc++.h>
using namespace std;

//basic double link list

struct node{
    int data;
    node *next;
    node *prev;
    node( int x){
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

int numberNode( node *list ){
    int cnt = 0;
    if( list == nullptr) return 0;
    node *Cu = list;
    while( Cu != nullptr){
        cnt++;
        Cu = Cu->next;
    }
    return cnt;
}

void add( node *&list , int x){
    node *newNode = new node(x);
    if( list == nullptr){
        list = newNode;
        return;
    }
    node *tmp = list;
    while( tmp->next != nullptr ) tmp = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void display(node *list){
    if( list == 0 ) return;
    node *Cu = list;
    while(Cu != nullptr){
        cout << Cu->data << " ";
        Cu = Cu->next;
    }
}

void insert_Front( node *&list , int x){
    node *newNode = new node(x);
    if( list == nullptr){
        list = newNode;
        return;
    }
    newNode->next = list;
    list->prev = newNode;
    list = newNode;    
}

void insert_Back( node *&list , int x){
    node *newNode = new node(x);
    if( list == nullptr){
        list = newNode;
        return;
    }
    node *Cu = list;
    if( Cu->next == nullptr){
        list->next = newNode;
        newNode->prev = list;
        return;
    }
    while( Cu->next->next != nullptr) Cu = Cu->next;
    Cu->next = newNode;
    newNode->prev = Cu;
}

void insert_Mid( node *&list , int x , int k){
    if( k < 0 || k >numberNode(list)+1) return;
    node *newNode = new node(x);
    if(list == nullptr){
        list = newNode;
        return;
    }
    if( k == 1){
        insert_Front( list , x);
        return;
    }
    if( k == numberNode( list)){
        insert_Back( list , x);
        return;
    }
    node *Cu = list;
    if( Cu->next == nullptr){
        list->next = newNode;
        newNode->prev = list;
        return;
    }
    for( int s = 1 ; s < k-1 ; s++) Cu = Cu->next;
    newNode->next = Cu->next;
    Cu->next = newNode;
    node *tmp = Cu->next;
    tmp->prev = newNode;
    newNode->prev = Cu;
}

void delete_Front( node *&list){
    if( list == nullptr) return;
    if( list->next == nullptr){
        node *tmp = list;
        list = nullptr;
        delete tmp;
        return;
    }
    node *tmp = list;
    list = list->next;
    delete tmp;
}

void delete_Back( node *&list ){
    if( list == nullptr ) return;
    if( list->next == nullptr){
        node *tmp = list;
        list = nullptr;
        delete tmp;
        return;
    }
    node *Cu = list;
    if(Cu->next == nullptr){
        list = nullptr;
        delete Cu;
        return;
    }
    while( Cu->next->next != nullptr) Cu = Cu->next;
    node *tmp = Cu->next;
    Cu->next = nullptr;
    delete tmp;
}

void delete_Mid( node *&list , int k){
    if( k < 0 || k > numberNode(list)+1) return;
    if( list == nullptr) return;
    if( k == 1){
        delete_Front(list);
        return;
    }
    if( k == numberNode(list)){
        delete_Back(list);
        return;
    }
    node *Cu = list;
    if( Cu->next == nullptr){
        list = nullptr;
        delete Cu;
        return;
    }
    for( int s = 1 ; s < k-1 ; s++) Cu = Cu->next;
    node *tmp = Cu->next;
    node *after = tmp->next;
    Cu->next = after;
    after->prev = Cu;
    delete tmp; 
}

#endif