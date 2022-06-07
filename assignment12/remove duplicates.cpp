class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* var= head;
        while(var->next!=NULL){
            if(var->val!=var->next->val) var=var->next;
            else var->next=var->next->next;
        }
        return head;
    }
};
