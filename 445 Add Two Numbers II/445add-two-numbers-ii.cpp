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
    ListNode* reverse( ListNode* l1){
        ListNode* prev = NULL;
        ListNode* curr = l1;
        ListNode* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rev1 = reverse(l1);
        ListNode* rev2 = reverse(l2);
        ListNode* result = NULL;
        ListNode* temp = NULL;
        int carry = 0;
        while(rev1!=NULL || rev2!=NULL || carry!=0){
            int sum = carry;
            if(rev1!=NULL){
                sum+=rev1->val;
                rev1=rev1->next;
            }
            if(rev2!=NULL){
                sum+=rev2->val;
                rev2=rev2->next;
            }
            carry = sum/10;
            ListNode* newnode = new ListNode(sum%10);
            if(result==NULL){
                result = newnode;
            }
            else{
                temp->next = newnode;
            }
            temp = newnode;
        }
        return reverse(result);
    }
};