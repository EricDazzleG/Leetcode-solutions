class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k, nullptr);
        

        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

       
        int n = count / k; 
        int r = count % k; 

        ListNode* curr = head;
        for (int i = 0; i < k && curr != nullptr; ++i) {
            ans[i] = curr;
            int partSize = n + (i < r ? 1 : 0);


            for (int j = 0; j < partSize - 1; ++j) {
                curr = curr->next;
            }

            ListNode* next = curr->next;
            curr->next = nullptr;
            curr = next;
        }

        return ans;
    }
};
