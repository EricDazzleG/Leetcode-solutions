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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* next = removeNodes(temp->next);
        temp->next = next;
        if(next == NULL ||temp->val>=next->val){
            return temp;
        }
        return next;
    }
};