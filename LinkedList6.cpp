There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

Example 1:
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
  
Example 2:
Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
Explanation: You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.

class Solution {
public:
    void deleteNode(ListNode* node) {
        // copy value of node ka next into node aur node k next ko cut krk node next k next me jod do;
        node->val=node->next->val;
        node->next=node->next->next;    
        
    }
};
