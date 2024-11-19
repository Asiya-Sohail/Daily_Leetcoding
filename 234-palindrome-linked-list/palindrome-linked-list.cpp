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
    bool isPalindrome(ListNode* head) {
        if (!head) return true;
        ListNode* curr = head;
        vector<int> v1, v2;
        while (curr) {
            v1.push_back(curr->val);
            v2.push_back(curr->val);
            curr = curr->next;
        }
        reverse(v2.begin(), v2.end());
        return v1 == v2;
        // if (!head) return true;
        // stack<int> st;
        // ListNode* temp = head;
        // while(temp) {
        //     st.push(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // while(temp){
        //     if (temp->val != st.top()) 
        //         return false;
        //     temp =  temp->next;
        //     st.pop();
        // }
        // return true;
    }
};