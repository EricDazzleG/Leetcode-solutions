/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
    
        queue<TreeNode*> p;
        p.push(root);
        while(!p.empty()){
            int s = p.size();
            vector<int> v; 
            for(int i =0;i<s;i++){
                TreeNode* temp = p.front();
                p.pop();
                if(temp->left){
                    p.push(temp->left);
                }
                if(temp->right){
                    p.push(temp->right);
                }
                v.push_back(temp->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};