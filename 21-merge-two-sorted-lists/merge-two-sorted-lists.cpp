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
    ListNode* solve(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* next1 = curr1->next;
        ListNode* next2 = curr2->next;
        
        if (list1->next == nullptr){
            list1->next = list2;
            return list1;
        }

        while(curr2 && next1) {
            if ((curr2->val >= curr1->val) && (curr2->val <= next1->val)) {
                curr1->next = curr2; //curr2 is the middle node
                next2 = curr2->next; //update the second list 
                curr2->next = next1; //update the middle node's next pointer
                curr1 = curr2; //update the current pointer of first list
                curr2 = next2; //update the current pointer of second list
            }
            else {
                curr1 = next1;
                next1 = next1->next;

                if (next1 == nullptr) { //If the first list is ended , attach the second list and return
                    curr1->next = curr2;
                    return list1;
                }
            }
        }
        return list1;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if (list1 == nullptr) return list2;
      if (list2 == nullptr) return list1; 
      if (list1->val <= list2->val) 
        return solve(list1, list2);
    else
        return solve(list2, list1);      
    }

    // NEW DUMMY NODE
    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //   if (list1 == nullptr) return list2;
    //   if (list2 == nullptr) return list1;  
    //   ListNode* p1 = list1; 
    //   ListNode* p2 = list2;
    //   ListNode* dummy = new ListNode(-1);
    //   ListNode* p3 = dummy;
    //   while (p1 != nullptr && p2 != nullptr){
    //     if (p1->val <= p2->val){
    //         p3->next = p1;
    //         p1 = p1->next;
    //     } else {
    //         p3->next = p2;
    //         p2 = p2->next;
    //     }
    //     p3 = p3->next;
    //   }
    //     // while (p1 != nullptr){
    //     //     p3->next = p1;
    //     //     p1 = p1->next;
    //     //     p3 = p3->next;
    //     // }
    //     // while(p2 != nullptr){
    //     //     p3->next = p2;
    //     //     p2 = p2->next;
    //     //     p3 = p3->next;
    //     // }
    //     if (p1 != nullptr)
    //         p3->next = p1;
    //     else if (p2 != nullptr)
    //         p3->next = p2;
    //     return dummy->next;
    // }
};
