/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* listToBST(ListNode* &lnode, int low, int high)
    {
        if(low>high)
            return NULL;
        int mid = (low + high) / 2;
        TreeNode* leftChild = listToBST(lnode, low, mid-1);
        TreeNode* root = new TreeNode(lnode->val);
        root->left = leftChild;
        lnode = lnode->next;
        root->right = listToBST(lnode, mid+1, high);
        return root;
    }

    TreeNode *sortedListToBST(ListNode *head) {
        int count = 0;
        ListNode* p = head;
        TreeNode* root = NULL;
        if(p == NULL)
            return root;
        while(p)
        {
            count++;
            p = p->next;
        }
        int low = 0;
        int high = count - 1;
        root = listToBST(head, low, high);
        return root;
    }
};