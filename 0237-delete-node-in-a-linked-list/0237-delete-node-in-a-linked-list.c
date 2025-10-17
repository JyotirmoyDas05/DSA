/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    /* Try 1:*/

    //  struct ListNode* prev = NULL;

    // while (node != NULL && node->next != NULL)
    // {
    //     node->val = node->next->val; //assigning the value of next node Value to current node

    //     prev = node; //assigning the address of current node to *prev link pointer

    //     node = node->next; //continuing forward to next node if value of next is not null
    // }

    // prev->next = NULL; //when node reaches the last link of the list,i.e last node it deletes the address of the last node from *prev list pointer
    // free(node); //at last delete the last node
    

    /* Try 2:*/

    node->val = node->next->val; //since Node is set to the Position whose value needs to be replaced

    node->next = node->next->next;


}