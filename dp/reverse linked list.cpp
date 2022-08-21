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
    ListNode* rev(ListNode* head){
        ListNode* current = head;
        ListNode* nxt = NULL;
        ListNode* previous = NULL;
        
        while(current != NULL){
            nxt = current->next;
            current->next = previous;
            previous = current;
            current = nxt;
        }
        return previous;
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = rev(head);
        return temp;
        
    }
};