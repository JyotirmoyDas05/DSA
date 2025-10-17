/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }

    struct ListNode* odd = head;
    struct ListNode* even = head->next;

    struct ListNode* evenStart = head->next; //saving the first position of even Node to connect with the last position of odd node after segregation of ODD and Even Nodes

    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }

    odd->next = evenStart;

    return head;
}