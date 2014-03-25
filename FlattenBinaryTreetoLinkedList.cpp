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
    void preOrder(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        preOrder(root->left);
        preOrder(root->right);
        TreeNode* tmp = root->right;
        root->right = root->left;
        root->left = NULL;
        TreeNode* p = root;
        while(p->right)
            p = p->right;
        p->right = tmp;
    }
    void flatten(TreeNode *root) {
        TreeNode* pre = NULL;
        preOrder(root);
    }
};