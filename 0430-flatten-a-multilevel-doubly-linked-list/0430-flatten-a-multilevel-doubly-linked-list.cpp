class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL){
            return NULL;
        }
        Node*curr=head;
        while(curr!=NULL){
            if(curr->child!=NULL){
                Node*nextNode=curr->next;
                Node*childHead=flatten(curr->child);
                curr->next=childHead;
                childHead->prev=curr;
                curr->child=NULL;
                Node*childTail=childHead;
                while(childTail->next!=NULL){
                    childTail=childTail->next;
                }
                childTail->next=nextNode;
                if(nextNode!=NULL){
                    nextNode->prev=childTail;
                }
            }
            curr=curr->next;
        }
        return head;
    }
};
