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
        int count = 0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* swapPairs(ListNode* head) {
        int length = listlength(head);
        if(head==NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next = NULL;
        int count =0;
        while(current!=NULL && count<2 ){
            next = current->next;
            current->next = prev;
            prev =current;
            current = next;
            count++;
        }
        length = length -2;

        if(next!=NULL && length>=2){
            head->next= swapPairs(next);
        }
        else{
            head->next=next;
        }
        return prev;
    }
};