Given the head of a sorted linked list,
delete all duplicates such that each element appears only once.
Return the linked list sorted as well.

Example1:
Input: head = [1,1,2]
Output: [1,2]

Example2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->val==curr->next->val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};


// Optimise method 
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* t1=head;
        ListNode* t2=head->next;

        while(t2!=NULL){
            ListNode* temp=t2;
            if(t1->val==t2->val){
                t2=t2->next;
                delete temp;
            }
            else{
                t1->next=t2;
                t1=t1->next;
                t2=t2->next;
            }
        }
        t1->next=NULL;
        return head;
