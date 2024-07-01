#include <bits/stdc++.h>
using namespace std;
 
// A Binary Tree Node
struct node
{
    struct node *left, *right;
    int key;
};
void siblings(struct node a){
    if(a.left==NULL&&a.right==NULL){
        return ;
    }
    else if(a.right!=NULL){
        cout<<a.right->key<<" ";
        siblings(*a.right);
    }
    else if(a.left!=NULL){
        cout<<a.left->key<<" ";
        siblings(*a.left);
    }
}