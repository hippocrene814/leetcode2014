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
    ListNode *swapPairs(ListNode *head) {
        ListNode *p, *q, *pre, *tmp, *res;
        if(head == NULL || head->next == NULL)
            return head;
        p = head;
        res = p->next;
        q = p->next;
        p->next = q->next;
        q->next = p;
        pre = p;
        p = p->next;
        while(p && p->next)
        {
            q = p->next;
            p->next = q->next;
            q->next = p;
            pre->next = q;
            pre = p;
            p = p->next;
        }
        return res;

    }
};