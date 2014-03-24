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
    void createMiniTree(vector<int> &num, int low, int high, TreeNode* &root)
    {
        if(low <= high)
        {
            int mid = low + (high - low)/2;
            root = new TreeNode(num[mid]);
            createMiniTree(num, low, mid-1, root->left);
            createMiniTree(num, mid+1, high, root->right);
        }
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        int len=num.size();
        TreeNode *root=NULL;
        if(len>0)
            createMiniTree(num, 0, len-1, root);
        return root;
    }
};