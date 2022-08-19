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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(!head1 && !head2 )return NULL;
        if(!head1 || !head2)return NULL;
        
        int l1=getlen(head1);
        int l2=getlen(head2);
        int n=abs(l1-l2);
        
       if(l1>l2){
           while(n--)head1=head1->next;
       }else {
           while(n--)head2=head2->next;
       }
           
        while(head1!=head2 && head1!=NULL && head2!=NULL){
            head1=head1->next;
            head2=head2->next;
        }
        if(!head1 || !head2)return NULL;
        return head1;
        
        
    }
    int getlen(ListNode *head){
        if(!head)return 0;
        int i=0;
        while(head){
            head=head->next;
            i++;
        }
        return i;
    }
};
