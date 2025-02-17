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
    ListNode* rotateRight(ListNode* head, int k) {
        int length = listlength(head);
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        k=k%length;
        if(k==0) return head;
        ListNode* temp = head;
        for(int i=0;i<length-k-1;i++){
            temp = temp->next;
        }
        ListNode* newh = temp->next;
        temp->next = NULL;
        ListNode* current = newh;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=head;
        return newh;

    }
};