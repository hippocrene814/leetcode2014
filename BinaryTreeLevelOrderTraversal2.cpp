/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct DNode
{
    TreeNode *node;
    int depth;
};
class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        queue<DNode> q;
        vector<int> line;
        DNode a;
        a.node=root;
        a.depth=1;
        q.push(a);
        int i=1;
        while(!q.empty())
        {
            DNode b=q.front();
            while(b.depth==i)
            {
                line.push_back(b.node->val);
                q.pop();
                if(b.node->left)
                {
                    DNode c;
                    c.node=b.node->left;
                    c.depth=i+1;
                    q.push(c);
                }
                if(b.node->right)
                {
                    DNode d;
                    d.node=b.node->right;
                    d.depth=i+1;
                    q.push(d);
                } 
                b=q.front();
            }
            res.push_back(line);
            line.erase(line.begin(), line.end());
            i++;
        }
        vector<vector<int>> res1;
        while(!res.empty())
        {
            vector<int> line;
            line=res.back();
            res.pop_back();
            res1.push_back(line);
        }
        return res1;
    }
};