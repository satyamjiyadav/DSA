#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

bool ismirror(struct node* root1 , struct node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 && root2 && root1->data == root2->data){
        return ismirror(root1->left,root2->right) && ismirror(root1->right , root2->left);
    }
    return false;
}

bool issymmetric(struct node* root){
    if(root==NULL){
        return 1;
    }
    return ismirror(root->left, root->right);
}

int main(){
    node* root=new node(5);
    root->left=new node(1);
    root->right=new node(1);
    root->left->left=new node(2);
    root->right->right=new node(2);
    cout<<issymmetric(root);
}
