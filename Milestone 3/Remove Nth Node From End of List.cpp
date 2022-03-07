class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start=new ListNode(-1, head);
        ListNode *slow=start, *fast=start;
        for(int i=0; i<n; ++i) {
            fast=fast->next;
        }
        while(fast->next) {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return start->next;
    }
};
