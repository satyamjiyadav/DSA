Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect.
If the two linked lists have no intersection at all, return null.

Example 1:
Input:listA = [4,1,8,4,5], listB = [5,6,1,8,4,5]
Output: Intersected at '8'


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL; 
        ListNode *a=headA;
        ListNode *b=headB;
        
    // tab tak loop chalega jab tak  a aur b linked list equal nhi ho jaati.
        while(a!=b){
            a=(a==NULL) ? headB:a->next;
            b=(b==NULL) ? headA:b->next;
        } 
        return a;   
    }
};


METHOD2:
class Solution {
public:
        int length(ListNode * head){
            int len=0;
            while(head!=NULL){
                len++;
                head=head->next;
            }
            return len;
        }  

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=length(headA);
        int lenB=length(headB);

        int skip=abs(lenA-lenB);

        if(lenA>lenB){
            while(skip>0){
                headA=headA->next;
                skip--;
            }
        }
        else{
            while(skip>0){
                headB=headB->next;
                skip--;
            }
        }

        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }

        return headA;
    }
};
