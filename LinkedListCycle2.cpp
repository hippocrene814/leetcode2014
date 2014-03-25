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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        ListNode *p, *q;
        p = head->next;
        q = head->next->next;
        while(q != NULL && q->next != NULL)
        {
            if(p == q)
                break;
            p = p->next;
            q = q->next->next;
        }
        if(q == NULL || q->next == NULL)
            return NULL;
        q = head;
        while(p != NULL)
        {
            if(p == q)
                break;
            p = p->next;
            q = q->next;
        }
        return p;
    }
};