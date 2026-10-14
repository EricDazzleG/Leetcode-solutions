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
        ListNode dummy(0,head); 
        ListNode* a = &dummy,*b = &dummy;
        while(n--){
            b= b->next;
        }
        while(b->next){
            a = a->next;
            b = b->next;
        }
        a->next = a->next->next;
        return dummy.next;

    }
};