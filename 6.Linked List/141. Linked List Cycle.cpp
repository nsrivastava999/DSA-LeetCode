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
        if (!head || !head->next)
            return false;

        struct ListNode *slow = head->next, *fast = head->next->next;

        while (fast && fast->next)
        {
            if (slow == fast)
                return true;

            slow = slow->next;
            fast = fast->next->next;
        }

        return false;
    }
};