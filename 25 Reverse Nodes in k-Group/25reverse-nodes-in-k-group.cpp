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
        int count= 0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length = listlength(head);
        if(head==NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next = NULL;
        int count =0;
        while(current!=NULL && count<k ){
            next = current->next;
            current->next = prev;
            prev =current;
            current = next;
            count++;
        }
        length = length -k;

        if(next!=NULL && length>=k){
            head->next= reverseKGroup(next,k);
        }
        else{
            head->next=next;
        }
        return prev;
    }
};