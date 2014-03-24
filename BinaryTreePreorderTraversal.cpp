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
    void preorder(TreeNode *root, vector<int> &v)
    {
        if(root == NULL) 
            return;
        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        preorder(root, res);
        return res;
    }



    vector<int> preorderTraversal(TreeNode *root) {
        stack<TreeNode *> s;
        vector<int> res;
        if(root==NULL) return res;
        TreeNode *a, *b;
        a=root;
        s.push(a);
        while(!s.empty())
        {
            b=s.top();
            res.push_back(b->val);
            s.pop();
            if(b->right) s.push(b->right);
            if(b->left) s.push(b->left);
        }
        return res;
    }
};