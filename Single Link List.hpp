#ifndef SINGLE_LINK_LIST_HPP
#define SINGLE_LINK_LIST_HPP

#include<bits/stdc++.h>
using namespace std;

//basic single link list

struct node_Simple{
    int data;
    node_Simple *next;
    node_Simple( int x){
        data = x;
        next = nullptr;
    }
};

void add( node_Simple *&head , int x){
    node_Simple *newNode = new node_Simple(x);
    if( head == nullptr){
        head = newNode;
        return;
    }
    node_Simple *tmp = head;
    while( tmp->next != nullptr){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display( node_Simple *&head){
    if(head == nullptr){
        return;
    }
    node_Simple *Cu = head;
    while( Cu != nullptr){
        cout << Cu->data << " ";
        Cu = Cu->next;
    }
}

int numberNode( node_Simple *&head){
    int cnt = 0;
    if(head == nullptr){
        return 0;
    }
    node_Simple *Cu = head;
    while( Cu != nullptr){
        cnt++;
        Cu = Cu->next;
    }
    return cnt;
}

void insert_Front(node_Simple *&head , int x){
    node_Simple *newNode = new node_Simple(x);
    if(head == nullptr){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_Back(node_Simple *&head , int x){
    node_Simple *newNode = new node_Simple(x);
    node_Simple *Cu = head;
    if( head == nullptr){
        head = newNode;
        return;
    }
    while(Cu->next != nullptr){
        Cu = Cu->next;
    }
    Cu->next = newNode;
}

void insert_Mid( node_Simple *&head , int x , int k ){
    if( k < 0 || k > numberNode( head )+1) return;
    if( k == 1){
        insert_Front( head , x);
        return;
    }
    if( k == numberNode(head)){
        insert_Back( head , x);
        return;
    }
    node_Simple *newNode = new node_Simple(x);
    if( head == nullptr){
        head = newNode;
        return;
    }
    node_Simple *Cu = head;
    for( int s = 1 ; s < k-1 ; s++) Cu = Cu->next; 
    newNode->next = Cu->next;
    Cu->next = newNode;
}

void delete_First_Node( node_Simple *&head ){
    if( head == nullptr) return;
    node_Simple *tmp = head;
    head = head->next;
    delete tmp;
}

void delete_Last_Node( node_Simple *&head){
    if( head == nullptr) return;
    node_Simple *Cu = head;
    if( Cu->next == nullptr){
        head = nullptr;
        delete Cu;
        return;
    }
    while( Cu->next->next != nullptr ) Cu = Cu->next;
    node_Simple *tmp = Cu->next;
    Cu->next = nullptr;
    delete tmp;
}

void delete_Mid_Node( node_Simple *&head , int k){
    if( k < 0 || k > numberNode(head)+1) return;
    if( head == nullptr) return;
    if( k == 1){
        delete_First_Node( head);
        return;
    }
    if( k == numberNode(head)){
        delete_Last_Node(head);
        return;
    }
    node_Simple  *Cu = head;
    if( Cu->next == nullptr){
        head = nullptr;
        delete Cu;
        return;
    }
    for( int s = 1 ; s < k-1 ; s++) Cu = Cu->next;
    node_Simple *tmp = Cu->next;
    Cu->next = tmp->next;
    delete tmp;
}

#endif