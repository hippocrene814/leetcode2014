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
    bool isSym(TreeNode* l, TreeNode* r)
    {
        if(l == NULL && r == NULL)
            return true;
        if(l == NULL || r == NULL)
            return false;
        return((l->val == r->val) && (isSym(l->left, r->right)) && (isSym(l->right, r->left)));
    }
    bool isSymmetric(TreeNode *root) {
        if(root == NULL)
            return true;
        return isSym(root->left, root->right);
    }
};