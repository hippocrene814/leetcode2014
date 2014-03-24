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
    void inOrder(TreeNode *root, vector<int> &p)
    {
        if(root==NULL) return;
        inOrder(root->left, p);
        p.push_back(root->val);
        inOrder(root->right, p);
    }
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> p;
        if(root==NULL) return p;
        inOrder(root, p);
        return p;
    }

        vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<BNode> s;
        if(root==NULL) return res;
        BNode a, b, c;
        a.node=root;
        a.bo=0;
        s.push(a);
        while(!s.empty())
        {
            b=s.top();
            s.pop();
            if(b.bo==0)
            {
                b.bo++;
                s.push(b);
                if(b.node->left)
                {
                    c.node=b.node->left;
                    c.bo=0;
                    s.push(c);
                }

            }
            else if(b.bo==1)
            {
                res.push_back(b.node->val);
                if(b.node->right)
                {
                    c.node=b.node->right;
                    c.bo=0;
                    s.push(c);
                }
            }
        }
        return res;
    }
    
};