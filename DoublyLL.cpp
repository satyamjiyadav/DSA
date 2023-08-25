#include <iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    
    Node(int x){
        prev = NULL;
        data = x;
        next = NULL;
    }
};

void deleteNode(Node* &head, int n){
    Node* temp = head;
    for(int i=1; i< n; i++){
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
}

int main() {
	Node* n1 = new Node(10);
	Node* n2 = new Node(20);
	Node* n3 = new Node(30);
	Node* n4 = new Node(40);
	Node* n5 = new Node(50);
	Node* n6 = new Node(60);
	n1->next = n2;
	n2->prev = n1;
	n2->next = n3;
	n3->prev = n2;
	n3->next = n4;
	n4->prev = n3;
	n4->next = n5;
	n5->prev = n4;
	n5->next = n6;
	n6->prev = n5;
	Node* head = n1;
	Node* temp = head;
	deleteNode(head,3);
	while(temp!= NULL){
	    cout<<temp->data<<" ";
	    temp = temp->next;
	}
	
	return 0;
}
