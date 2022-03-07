class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return head;
      ListNode* prev=head,*curr=head;
        while(curr!=NULL)
        {
            if(curr->next!=NULL && curr->val==curr->next->val)
                curr=curr->next;
            else
            {
            prev->next=curr->next;
            prev=curr->next;
                curr=prev;
            }
        }
        return head;
    }
};
