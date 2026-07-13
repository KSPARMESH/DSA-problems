/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        struct ListNode *listA=headA;
        struct ListNode *listB=headB;
        while(listA!=listB){
            if(listA==NULL){
                listA=headB;
            }
            else{
                listA=listA->next;
            }
            if(listB==NULL){
                listB=headA;
            }
            else{
                listB=listB->next;
            }
        }
        return listA;  //listA as well as listB will be at same position..
    }
};