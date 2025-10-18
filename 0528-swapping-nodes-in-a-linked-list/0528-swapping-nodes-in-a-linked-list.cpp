/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    int FindLength(ListNode* head) {
        int l = 0;
        
        while(head) {
            head = head->next;
            l++;
        }
        return l;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        //Kth Node from Start
        //Kth Node from End = Length-K+1 Node from Beginning
        
        int Length = FindLength(head);
        
        int k_1 = k;
        ListNode* temp1 = head;
        while(k_1 > 1) {
            temp1 = temp1->next;
            k_1--;
        }
        
        int k_2 = Length-k+1;
        ListNode* temp2 = head;
        while(k_2 > 1) {
            temp2 = temp2->next;
            k_2--;
        }
        
        swap(temp1->val, temp2->val);
        return head;
        
    }
};
