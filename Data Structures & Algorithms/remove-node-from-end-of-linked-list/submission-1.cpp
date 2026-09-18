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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        int count = 0;
        ListNode* fast = head;
        ListNode* slow = head;
        while(count < n + 1 && fast != NULL){
            fast = fast->next;
            count++;
        }
        if ( fast == NULL && count < n + 1){
            return head->next;
        }
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};

