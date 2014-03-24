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
        if(root == NULL) return 0;
        int ldepth = depth(root -> left);
        int rdepth = depth(root -> right);
        return (ldepth > rdepth ? (ldepth+1) : (rdepth+1));
    }
    int maxDepth(TreeNode *root) {
        if(root == NULL) return 0;
        int d = depth(root);
        return d;
    }
};
