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
    ListNode* getmid(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        if (left == nullptr) return right;
        if (right == nullptr) return left;

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while (left && right) {
            if (left->val < right->val) {
                curr->next = left;
                curr = left;
                left = left->next;
            }
            else {
                curr->next = right;
                curr = right;
                right = right->next;
            }
        }
        if (left != nullptr) {
            curr->next = left;
        } 
        if (right != nullptr) {
            curr->next = right;
        }
        ListNode* res = dummy->next;
        delete dummy;
        return res;
    }

    //MERGE SORT OF LINKED LISTS
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)   return head;
        ListNode* mid = getmid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = nullptr; //Ends the left list till mid

        left = sortList(left);
        right = sortList(right);

        ListNode* res = merge(left, right);
        return res;
    }

    //VERY EASY AND 2 NUMBER METHOD
    // ListNode* sortList(ListNode* head) {
    //     if (head == nullptr || head->next == nullptr)
    //         return head;
    //     vector<int> vec;
    //     ListNode* temp = head;
    //     while (temp != nullptr){
    //         vec.push_back(temp->val);
    //         temp = temp->next;
    //     }
    //     sort(vec.begin(), vec.end());
    //     temp = head;
    //     int count = 0;
    //     while(temp != nullptr){
    //         temp->val = vec[count];
    //         temp = temp->next;
    //         count++;
    //     }
    //     return head;
    // }
};