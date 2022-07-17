class Solution {
public:
   
   
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(!list1)
           return list2;
        if(!list2)
            return list1;
        ListNode* temp=list1;
        if(list1->val < list2->val){
           temp=list2;
            list2=list2->next;
        }
        else{
              temp=list1;
            list1=list1->next;   
        }
        ListNode* sort = temp;
        while(list1 && list2){
            if(list1->val < list2 -> val){
                sort->next = list1;
                list1 = list1 -> next;
            }
            else{
                  sort->next = list2;
                list2 = list2 -> next;
            }
            sort =sort -> next;
        }
            if(!list1)
                sort -> next=list2;
            if(!list2)
                sort -> next=list1;
        return temp;
        
    }
};
