#include <iostream>
using namespace std;

class node{
    public:
    node* next;
    int data;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertattail(node* &head, int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
bool search(node* head, int key){
    node* temp=head;
    while(temp->data==key){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
//when element present at head;
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head, int val){
    //when linked list is null, no any element 
    if(head==NULL){
        return;
    }
    //when only one element present i.e head element 
    if(head->next!=NULL){
        deleteathead;
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertathead(head,5);
    display(head);
    cout<<search(head,5)<<endl;
    deletion(head,4);
    deleteathead(head);
    display(head);


}
