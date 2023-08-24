#include <iostream>
using namespace std;

class node
{
public:
int data;
node *next;
node(int x)
{
data = x;
next = NULL;
}
};

void reverse(node *&head)
{
node *prev = NULL;
node *forword = NULL;
node *curr = head;
while (curr != NULL)
{
forword = curr->next;
curr->next = prev;
prev = curr;
curr = forword;
}

head = prev;
}

void print(node *&head)
{
node *temp = head;
while (temp != NULL)
{
cout << temp->data << endl;
temp = temp->next;
}
}

int main()
{
node *n1 = new node(1);
node *n2 = new node(2);
node *n3 = new node(3);
node *n4 = new node(4);
node *n5 = new node(5);

n1->next = n2;
n2->next = n3;
n3->next = n4;
n4->next = n5;
node *head = n1;
cout << "Before: " << endl;
print(head);

reverse(head);
cout << "After: " << endl;
print(head);
return 0;
}
