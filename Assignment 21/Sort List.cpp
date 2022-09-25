/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::sortList(ListNode* A) {
     vector<int>v;
        ListNode*temp=A;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode*curr=A;
        int i=0;
        while(curr!=NULL){
            curr->val=v[i];
            i++;
            curr=curr->next;
        }
        return A;

    
}
