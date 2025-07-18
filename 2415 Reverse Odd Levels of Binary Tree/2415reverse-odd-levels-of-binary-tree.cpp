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
    TreeNode* reverseOddLevels(TreeNode* root) {
    
        queue<TreeNode*> p;
        p.push(root);
        bool rev = 0;
        while(!p.empty()){
            int s = p.size();
            vector<TreeNode*> v(s); 
            for(int i =0;i<s;i++){
                TreeNode* temp = p.front();
                p.pop();
                if(temp->left){
                    p.push(temp->left);
                }
                if(temp->right){
                    p.push(temp->right);
                }
                if(rev){
                v[i]=temp;
                    if(i>=s/2){
                    swap(v[i]->val,v[s-i-1]->val);
                    }
                }
            }
            
            rev=!rev;
        }
        return root;
    }
};