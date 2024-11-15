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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = new ListNode(0, head);
        ListNode* res = curr;
        // while(curr != nullptr) {
        //     while (curr->next != nullptr && curr->next->val == val){
        //         curr->next = curr->next->next;
        //     } 
        //     curr = curr->next;  
        // }    
        while (curr->next != nullptr) {
            if (curr->next->val == val)
                curr->next = curr->next->next;
            else 
                curr = curr->next;
        } 
        return res->next;
    }
};