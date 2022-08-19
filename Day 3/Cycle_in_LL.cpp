/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)return NULL;
        
        ListNode *slow=head;
        ListNode *fast=head;
        bool f=0;
        while(fast && fast->next ){
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
            if(slow==fast){f=1;break;}
        }
        if(f==0)return NULL;
        
        //intersection point//
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
        
    }
};
