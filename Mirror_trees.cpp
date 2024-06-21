#include<bits/stdc++.h>
using namespace std;
 
/* A binary tree node has data, pointer to
   left child and a pointer to right child */
struct Node
{
    int data;
    Node* left, *right;
};
 
bool areMirror(Node* a,Node* b){
    if(a==NULL && b==NULL){
        return true;
    }
    if(a==NULL || b==NULL){
        return false;
    }

    return a->data==b->data &&areMirror(a->left,b->right)&&areMirror(a->right,b->left);
}