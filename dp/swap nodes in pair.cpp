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
    void swapi(ListNode *item){
        if(item == NULL || item->next == NULL)
            return;
        else{
            int value = item->val;
            item->val = item->next->val;
            item->next->val = value;
            if(item->next->next == NULL){
                return;
            }
            swapi(item->next->next);
        }
    }
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        swapi(temp);
        return head;
    }
};