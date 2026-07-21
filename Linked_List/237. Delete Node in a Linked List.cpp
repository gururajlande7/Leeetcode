/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        int n=node->next->val;
        ListNode * temp=node->next;
        node->next=temp->next;
        node->val=n;
        temp->next=NULL;
    }
};