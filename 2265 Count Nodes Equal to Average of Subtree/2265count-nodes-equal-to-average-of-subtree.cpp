class Solution {
public:
    int count = 0;

   
    pair<int, int> dfs(TreeNode* root) {
        if (!root) return {0, 0};

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        int totalSum = left.first + right.first + root->val;
        int totalCount = left.second + right.second + 1;

        if (root->val == totalSum / totalCount) {
            count++;
        }

        return {totalSum, totalCount};
    }

    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return count;
    }
};
