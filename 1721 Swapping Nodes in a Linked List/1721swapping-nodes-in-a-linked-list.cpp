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
    int listlength(ListNode* head){
        int count =0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int length = listlength(head);
        if(k>length) return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        for(int i=1;i<k;i++){
            temp1=temp1->next;
        }
        for(int i =1; i<length-k+1;i++){
            temp2=temp2->next;
        }
        int temp = temp1->val;
        temp1->val =temp2->val;
        temp2->val = temp;
        return head;
    }
};