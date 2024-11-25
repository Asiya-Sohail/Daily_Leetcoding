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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = l1;
        ListNode* list2 = l2; 
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        int carry = 0, sum = 0;
        
        while (list1 || list2  || carry) {
            int first = (list1) ? list1->val : 0;
            int second = (list2) ? list2->val : 0;
            sum = first + second + carry;
            carry = sum / 10;
            sum = sum % 10;
            tail->next = new ListNode(sum); 
            tail = tail->next;
            // if (carry > 0) {
            //     tail->next = new ListNode(carry); 
            //     tail = tail->next;
            // }
            list1 = (list1) ? list1->next : nullptr;
            list2 = (list2) ? list2->next : nullptr;
        }
        
        tail->next = nullptr;
        return dummy->next;
    }
};