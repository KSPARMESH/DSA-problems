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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev=NULL;
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        head=temp2;
        while(temp1!=NULL && temp2!=NULL){
            ListNode* third=temp2->next;
            temp2->next=temp1;
            temp1->next=third;
            if(prev!=NULL){
                prev->next=temp2;
            }
            prev=temp1;
            temp1=third;
            if(temp1!=NULL){
                temp2=temp1->next;
            }
        }
        return head;
    }
};