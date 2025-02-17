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
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
            
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL && n==1){
            return NULL;
        }
        ListNode* temp = head;
        int total = listlength(head);
        if(n==total){
            return head->next;
        }
        for(int i=0;i<total-n-1;i++){
            temp=temp->next;
        }
        temp->next= temp->next->next;
        return head;

    }
};