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
    int depth(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int dl = depth(root->left);
        int dr = depth(root->right);
        return (max(dl, dr) + 1);
    }
    bool isBalanced(TreeNode *root) {
        if(root == NULL)
            return true;
        if(root->left == NULL && root->right == NULL)
            return true;
        int dif = abs(depth(root->left) - depth(root->right));
        return isBalanced(root->left) && isBalanced(root->right) && dif<=1;
            
    }
};