// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

   void deleteit(Node* &head , int position){
       Node* temp=head;
       if(position==1){
           head=head->next;
           return;//break ka  kaam karega
       }
      for(int i=1;i<position-1;i++){
          temp = temp->next;
      } 
      temp->next=temp->next->next;
      
   }    
   void printNodeList(Node* &head){
       Node* temp = head;
      
       while(temp!= NULL){
          cout<<temp->data<<endl;
           temp = temp->next;
       }
   }
int main() {
 
      Node* n1 = new Node(12);
      Node* n2 = new Node(24);
      Node* n3 = new Node(36);
      Node* n4 = new Node(48);
      Node* n5 = new Node(60);
      n1->next = n2;
      n2->next = n3;
      n3->next = n4;
      n4->next = n5;
      Node* head = n1;
      int position = 1;
      
      cout<<"before deleting of node : "<<endl;
       printNodeList(head);
       
      deleteit(head , position);
        cout<<"after deleting of node : "<<endl;
        printNodeList(head);
        return 0;
}
