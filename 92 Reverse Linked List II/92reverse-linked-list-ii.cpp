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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || left==right){
            return head;
        }
        ListNode* p=NULL;
        ListNode* temp=head;
        for(int i =1;i<left;i++){
            p=temp;
            temp=temp->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = temp;
        ListNode* nex = NULL;
        for(int i =0;i<right-left+1;i++){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        if(p){
            temp->next=curr;
            p->next = prev;
        }
        else{
            head->next = curr;
            head = prev;
        }

        return head;

    }
};