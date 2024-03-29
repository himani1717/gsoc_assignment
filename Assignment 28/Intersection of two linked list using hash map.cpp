class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> s;
        while(headA){
            s.insert(headA);
            headA=headA->next;
        }
        while(headB){
            if(s.find(headB)!=s.end()){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};
