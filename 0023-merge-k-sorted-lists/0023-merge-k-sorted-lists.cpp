
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> a;

        for (auto x : lists) {
            while (x) {
                a.push(x->val);
                x = x->next;
            }
        }

        ListNode dummy(0);
        ListNode* b = &dummy;

        while (!a.empty()) {
            b->next = new ListNode(a.top());
            a.pop();
            b = b->next;
        }

        return dummy.next;
    }
};
