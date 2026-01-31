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
    ListNode* mergeNodes(ListNode* head) {
        int sum =0;
        ListNode* temp = head->next;
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        while(temp!=NULL){
            if(temp->val==0){
                tail->next = new ListNode(sum);
                tail=tail->next;
                sum=0;
            }
            else{
                sum=sum+temp->val;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};