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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *p, *q, *k;
        p = head;
        q = head;
        for(int i=0; i<n; i++)
            p = p->next;
        if(p == NULL)
            head = head->next;
        else
        {
            while(p != NULL)
            {
                p = p->next;
                k = q;
                q = q->next;
            }
            k->next = q->next;                                                                                                                                                           
        }
        return head;
    }
};