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
    void bfs(TreeNode *root, int dep, int &min)
    {
        if(root == NULL)
            return;
        if(dep < min && root->left == NULL & root->right == NULL)
            min = dep;
        bfs(root->left, dep + 1, min);
        bfs(root->right, dep + 1, min);
    }
    int minDepth(TreeNode *root) {
        if(root == NULL)
            return 0;
        int min = ~(1<<31);
        int d = 1;
        bfs(root, d, min);
        return min;
    }
};