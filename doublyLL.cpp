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
	Node* temp = n1;
	while(temp!= NULL){
	    cout<<temp->data<<" ";
	    temp = temp->next;
	}
	
	return 0;
}
