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
    void dfs(TreeNode* root, int sum, int psum, vector<int> &vi, vector<vector<int>> &vvi)
    {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
        {
            if(psum + root->val == sum)
            {
                vi.push_back(root->val);
                vvi.push_back(vi);
                vi.pop_back();
            }
            return;
        }
        vi.push_back(root->val);
        dfs(root->left, sum, psum + root->val, vi, vvi);
        dfs(root->right, sum, psum+root->val, vi, vvi);
        vi.pop_back();
    }
    
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<int> vi;
        vector<vector<int>> vvi;
        int psum = 0;
        dfs(root, sum, psum, vi, vvi);
        return vvi;
    }
};