class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }

        temp = head;
        for (int i = 0; i < count/2 - 1; i++) {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        return head;
    }
};
