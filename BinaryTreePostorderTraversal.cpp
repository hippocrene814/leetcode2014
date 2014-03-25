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
    void postOrder(TreeNode *root, vector<int> &v)
    {
        if(root == NULL)
            return ;
        postOrder(root->left, v);
        postOrder(root->right, v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> v;
        postOrder(root, v);
        return v;
    }
};

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include <stack>
 struct NNode
 {
    TreeNode *node;
    int count;
 };
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<NNode> s;
        if(root==NULL) return res;
        NNode a, b, c;
        a.node=root;
        a.count=0;
        s.push(a);
        while(!s.empty())
        {
            b=s.top();
            s.pop();
            if(b.count==0)
            {
                b.count++;
                s.push(b);
                if(b.node->left)
                {
                    c.node=b.node->left;
                    c.count=0;
                    s.push(c);
                }
            }
            else if(b.count==1)
            {
                b.count++;
                s.push(b);
                if(b.node->right)
                {
                    c.node=b.node->right;
                    c.count=0;
                    s.push(c);
                }
            }
            else if(b.count==2)
            {
                res.push_back(b.node->val);
            }
        }
        return res;
        
    }
};