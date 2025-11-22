class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){// agar ek hee node huauska tackl kr liya
            return NULL;
    }
    ListNode*prev = NULL;
    ListNode*slow = head;
    ListNode*fast  = head;

    while(fast!=NULL && fast->next!=NULL ){
        prev = slow;
        slow=slow->next;
        fast=fast->next->next;

    }
    prev->next=slow->next;//yahi line delete node ka lnk tod rhi h
    delete(slow);
    return head;



        
    }
};
