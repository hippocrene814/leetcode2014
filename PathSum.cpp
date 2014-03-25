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
    void pathSum(TreeNode* root, int &tsum, int sum, bool &flag)
    {
        if(root == NULL || flag == true)
            return;
        if(!root->left && !root->right)
        {
            if((tsum + root->val) == sum)
                flag = true;
            return;
        }
        tsum = tsum + root->val;
        pathSum(root->left, tsum, sum, flag);
        pathSum(root->right, tsum, sum, flag);
        tsum = tsum - root->val;
        
    }
    bool hasPathSum(TreeNode *root, int sum) {
        bool flag = false;
        int tsum = 0;
        pathSum(root, tsum, sum, flag);
        return flag;
    }
};