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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //logic for merging and then sorting the merged list
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* temp=list1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=list2;
        ListNode* temp1=list1;
        while(temp1!=NULL){
            ListNode* temp2=temp1->next;
            while(temp2!=NULL){
                if(temp1->val > temp2->val){
                    swap(temp1->val,temp2->val);
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        return list1;
    }
};