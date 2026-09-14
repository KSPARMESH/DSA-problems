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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int total=0;
        while(temp!=NULL){
            temp=temp->next;
            total++;
        }
        if(total==n){
            return head->next;
        }
        temp=head;
        int before_node_pos=total-n;
        while(before_node_pos>1){
            temp=temp->next;
            before_node_pos--;
        }
        temp->next=temp->next->next;
        return head;
    }
};