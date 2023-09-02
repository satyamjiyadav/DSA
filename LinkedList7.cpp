Given head, the head of a linked list, determine if the linked list has a cycle in it.

Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

Example 3:
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.

// agar slow==fast ho jaye mtlb cycle hai....nhi to nhi
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return false;
        } 
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return true;
            }
        }
        return false;

    }
};
