#ifndef TREE_HPP
#define TREE_HPP

#include<bits/stdc++.h>
using namespace std;

//basic build tree
struct node{
    int data;
    node *left;
    node *right;
    node( int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

void add_Binary_Search_Tree(node *&tree , int x){
    if(tree == nullptr){
        node *newNode = new node(x);
        tree = newNode;
        return;
    }
    if( x < tree->data){
        add_Binary_Search_Tree(tree->left , x);
    }
    if( x > tree->data){
        add_Binary_Search_Tree(tree->right , x);
    }
}

void display_Binary_Search_Tree(node *tree){
    if(tree == nullptr) return;
    display_Binary_Search_Tree(tree->left);
    cout << tree->data << " ";
    display_Binary_Search_Tree(tree->right);
}

void inorder_Binary_Search_Tree(node *tree){
    if( tree == nullptr) return;
    inorder_Binary_Search_Tree(tree->left);
    inorder_Binary_Search_Tree(tree->right);
}
#endif