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
