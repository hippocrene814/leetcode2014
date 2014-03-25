/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public: 
    void dfs(TreeNode* root, int psum, int &sum)
    {
        if(root == NULL)
            return;
        
        if(root->left == NULL && root->right == NULL)
        {
            psum = psum * 10 + root->val;
            sum = sum + psum;
            return;
        }
        dfs(root->left, psum * 10 + root->val, sum);
        dfs(root->right, psum * 10 + root->val, sum);
    }
    
    int sumNumbers(TreeNode *root) {
        int psum = 0;
        int sum = 0;
        dfs(root, psum, sum);
        return sum;
    }
};