class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* slow = headA;
        ListNode* fast = headB;
        while(slow!=fast){
            if(slow==NULL){
                slow=headB;  
            }else{
                slow=slow->next;
            }
            if(fast==NULL){
                fast=headA;
            }else{
                fast=fast->next;
            }
        }
         return slow;

    }
};
