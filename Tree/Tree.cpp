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
    void inorder(node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
        
    }
    void preorder(node* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(node* root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

int main(){
    node* n1=new node(5);
    node* n2=new node(6);
    node* n3=new node(7);
    node* n4=new node(8);
    // node* n5=new node(9);
    // node* n6=new node(10);
    // node* n7=new node(11);
    // node* n8=new node(12);
    // node* n9=new node(13);
    // node* n10=new node(14);
    node* root=n1;
    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    // n3->left=n5;
    // n3->right=n6;
    // n5->left=n7;
    // n7->right=n8;
    // n8->left=n9;
    // n8->right=n10;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
}
