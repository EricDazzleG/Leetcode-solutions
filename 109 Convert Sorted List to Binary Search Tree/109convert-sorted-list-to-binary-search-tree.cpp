class Solution {
    TreeNode* convert(ListNode*& head, int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;

        TreeNode* leftChild = convert(head, left, mid - 1);

        TreeNode* root = new TreeNode(head->val);
        head = head->next;

        TreeNode* rightChild = convert(head, mid + 1, right);

        root->left = leftChild;
        root->right = rightChild;

        return root;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return convert(head, 0, count - 1);
    }
};
