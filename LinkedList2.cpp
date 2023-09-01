You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
        
Example 2:
Input: list1 = [], list2 = []
Output: []
        
Example 3:
Input: list1 = [], list2 = [0]
Output: [0]

// You are given the heads of two sorted linked lists head1 and head2.

        ListNode* p1=head1;
        ListNode* p2=head2;
        ListNode* dummynode=new ListNode(-1);
        ListNode* p3=dummynode;

        while(p1!=NULL && p2!=NULL){
            if(p1->val<p2->val){
                p3->next=p1;
                p1=p1->next;
            }
            else{
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }

        while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }

        return dummynode->next;
