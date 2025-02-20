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
    ListNode* insertionSortList(ListNode* head) {
        for(auto i = head;i!=NULL;i=i->next){
            for(auto j = head;j!=i;j=j->next){
                if(j->val>i->val){
                    swap(i->val,j->val);
                }
            }
        }
        return head;
    }
};