//this is Answer to the Leetcode question which is under Questions asked in interview section
//237. Delete Node in a Linked List

class Solution {
public:
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val;//this position will show value of next node
        node -> next = node -> next -> next;//this node's next will point to next of next node.
    }
};

//where 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
