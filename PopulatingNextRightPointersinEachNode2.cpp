/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
struct DNode
{
    TreeLinkNode *node;
    int level;
};
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<DNode> q;
        DNode p;
        if(root == NULL)
            return ;
        p.node = root;
        p.level = 1;
        int i = 1;
        q.push(p);
        while(!q.empty())
        {
            DNode tmp = q.front();
            TreeLinkNode *pre;
            if(tmp.level == i)
            {
                pre = tmp.node;
                q.pop();
                if(pre->left)
                {
                    DNode l;
                    l.node = pre->left;
                    l.level = i + 1;
                    q.push(l);
                }
                if(pre->right)
                {
                    DNode r;
                    r.node = pre->right;
                    r.level = i + 1;
                    q.push(r);
                }
                tmp = q.front();
            }
            while(tmp.level == i && !q.empty())
            {
                pre->next = tmp.node;
                q.pop();
                if(tmp.node->left)
                {
                    DNode l;
                    l.node = tmp.node->left;
                    l.level = i + 1;
                    q.push(l);
                }
                if(tmp.node->right)
                {
                    DNode r;
                    r.node = tmp.node->right;
                    r.level = i + 1;
                    q.push(r);
                }
                pre = tmp.node;
                tmp = q.front();
            }
            pre->next = NULL;
            i++;
        }
        
    }
};