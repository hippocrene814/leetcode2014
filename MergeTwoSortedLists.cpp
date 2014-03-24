/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        ListNode* head;
        if(l1->val < l2->val)
        {
            head = l1;
            l1 = l1->next;
        }
        else 
        {
            head = l2;
            l2 = l2->next;
        }
        ListNode* cur;
        ListNode* pre = head;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                cur = l1;
                l1 = l1->next;
            }
            else
            {
                cur = l2;
                l2 = l2->next;
            }
            pre->next = cur;
            pre = cur;
            
        }
        if(l1 != NULL)
            pre -> next = l1;
        else if (l2 != NULL)
            pre -> next = l2;
        return head;
    }
};