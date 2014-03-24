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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL)
            return false;
        ListNode *p, *q;
        p = head -> next;
        q = head -> next -> next;
        while(q != NULL && q ->next != NULL)
        {
            if(p == q)
                return true;
            p = p -> next;
            q = q -> next -> next;
        }
        return false;
        

    }
};