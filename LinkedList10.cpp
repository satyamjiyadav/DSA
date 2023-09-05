Given the head of a singly linked list, return true if it is a 
palindrome or false otherwise.
  
Example 1:
Input: head = [1,2,2,1]
Output: true
  
Example 2:
Input: head = [1,2]
Output: false

class Solution {
            ListNode* reverselist(ListNode* head){
            ListNode* prevptr=NULL;
            ListNode* currptr=head;
            ListNode* nextptr;

            while(currptr!=NULL){
                nextptr=currptr->next;
                currptr->next=prevptr;
                prevptr=currptr;
                currptr=nextptr;
            }
            return prevptr;
        }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
//reverse other half linked list middle k baad wali;
        slow->next=reverselist(slow->next);
//slow ko other half k starting me le aao;
        slow=slow->next;
//check both half are equal or not;
        while(slow!=NULL){
            if(slow->val!=head->val){
                return false;
            }
            else{
                slow=slow->next;
                head=head->next;
            }
        }
        return true;
    }
    
};
