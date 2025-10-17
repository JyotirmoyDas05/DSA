/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    
    struct ListNode* prevslow = NULL;
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        prevslow = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prevslow->next = slow->next;
    free(slow);
    
    return head;
}