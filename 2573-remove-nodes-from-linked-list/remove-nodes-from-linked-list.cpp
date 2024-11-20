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
    ListNode* removeNodes(ListNode* head) {
        if (!head || !head->next) return head;
        vector<int> v;
        ListNode* curr = head;
        while(curr) {
            while(!v.empty() && v[v.size()-1] < curr->val)
                v.pop_back();
            v.push_back(curr->val);
            curr = curr->next;
        }
        ListNode* dummy = new ListNode(0);
        curr = dummy;
        for (int i : v) {
            curr->next = new ListNode(i);
            curr = curr->next;
        }
        return dummy->next;
    }
};