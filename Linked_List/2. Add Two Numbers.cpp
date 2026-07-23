class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = l1;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while (temp1 != NULL) {
            int val2 = (temp2 ? temp2->val : 0);
            int sum = temp1->val + val2 + carry;

            temp1->val = sum % 10;
            carry = sum / 10;

            temp1 = temp1->next;
            if (temp2) temp2 = temp2->next;
        }

        if (carry) {
            temp1 = head;
            while (temp1->next) temp1 = temp1->next;
            temp1->next = new ListNode(carry);
        }

        return head;
    }
};
