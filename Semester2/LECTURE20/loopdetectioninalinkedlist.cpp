// class Solution snippet for detecting loops within a linked list
// using fast and slow pointers
// this is my LeetCode solution to problem 141. Linked List Cycle
struct ListNode{
    int val;
    struct ListNode * next;
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * fast = head;
        ListNode * slow = head;
        while (fast && fast->next ){
            // cout<< ptr->val<<endl;
            fast=fast->next->next;
            slow= slow->next;
            if (fast==slow){
                return true;
            }

        }
        return false;
    }
};