/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode *temp=head,*tail=NULL;
        while(temp!=NULL){
            n++;
            if(temp->next==NULL){
                tail=temp;
            }
            temp=temp->next;
        }
        if(n<=1){
            return head;    
        }
        k%=n;
        if(k==0){
            return head;
        }
        int x=n-k;
        ListNode *newhead=NULL,*newtail=NULL;
        temp=head;
        for(int i=1;i<=x;i++){
            if(i==x){
                newtail=temp;
            }
            temp=temp->next;
        }
        newhead=temp;
        tail->next=head;
        newtail->next=NULL;
        return newhead;
    }
};