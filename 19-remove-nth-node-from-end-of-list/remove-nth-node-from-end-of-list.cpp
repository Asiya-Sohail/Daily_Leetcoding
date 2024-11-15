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
        ListNode* temp = new ListNode(0, head);
        ListNode* fast = temp;
        ListNode* slow = temp;
        
        for (int i=0; i<=n; i++) {
            fast = fast->next;
        }

        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;
        return temp->next;
    }

    //MY OWN SOLUTION
    // ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     ListNode* next = nullptr;
    //     ListNode* prev = nullptr;
    //     ListNode* curr = head;
    //     while(curr != nullptr) {
    //         next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     int count = 1;
    //     ListNode* temp = prev;
    //     ListNode* y = nullptr;
    //     while (count != n && temp != nullptr) {
    //         y = temp;
    //         temp = temp->next;
    //         count++;
    //     }
    //     if (count == n) {
    //         if (y == nullptr)
    //             prev = temp->next;
    //         else
    //             y->next = y->next->next;
    //     }

    //     curr = prev;
    //     prev=  nullptr;
    //     while(curr != nullptr) {
    //         next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     return prev;
    // }
};