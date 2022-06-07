#include<bits/stdc++.h>
using namespace std;
 struct Node{
     int val;
     Node * next;
 };
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode *quick=head,*slow=head;

	while(quick&&quick->next)
	{
		quick=quick->next->next;
		slow=slow->next;
	}

	return slow;
}
};
int main() {
    Node *head;
    head->val= 1;
    cout<<"val="<<head->val<<" ";
    Node *temp;
    temp->val=2;
    cout<<"val="<<temp->val;
    head->next =temp;
    return 0;

}
