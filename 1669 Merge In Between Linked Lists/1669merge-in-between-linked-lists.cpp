class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;

        
        for (int i = 0; i < a - 1; i++) {
            curr = curr->next;
        }

        ListNode* afterA = curr;          
        ListNode* temp = curr->next;   


        for (int i = a; i <= b; i++) {
            temp = temp->next;
        }

        afterA->next = list2;

        while (list2->next != nullptr) {
            list2 = list2->next;
        }

        list2->next = temp;

        return list1;
    }
};
