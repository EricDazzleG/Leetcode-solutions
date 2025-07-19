class Solution {
public:
    int diameter = 0;

    int height(TreeNode* node) {
        if (node == NULL) return 0;
        int left = height(node->left);
        int right = height(node->right);
        diameter = max(diameter, left + right);  // No +1 because it's node count - 1 (edges)
        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
