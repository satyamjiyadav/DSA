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

int maxdepth(node* Node){
    if(Node==NULL){
        return 0;
    }
    else{
        int l=maxdepth(Node->left);
        int r=maxdepth(Node->right);
        if(l>r){
            return (l+1);
        }
        else{
            return r+1;
        }
    }
}


int main(){
    node* n1=new node(1);
    node* n2=new node(2);
    node* n3=new node(3);
    node* n4=new node(4);
    node* n5=new node(5);
    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n3->right=n5;
    node* root=n1;
    // node* root = new node(1);
 
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->right->right = new node(5);
    cout<<maxdepth(root);
}
