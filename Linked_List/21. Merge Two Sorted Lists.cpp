class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return nullptr;

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        while(list1 && list2){
            ListNode* node;
            if(list1->val < list2->val){
                node = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                node = new ListNode(list2->val);
                list2 = list2->next;
            }

            if(!head){
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = tail->next;
            }
        }

        while(list1){
            ListNode* node = new ListNode(list1->val);
            if(!head){ head = node; tail = node; }
            else { tail->next = node; tail = tail->next; }
            list1 = list1->next;
        }

        while(list2){
            ListNode* node = new ListNode(list2->val);
            if(!head){ head = node; tail = node; }
            else { tail->next = node; tail = tail->next; }
            list2 = list2->next;
        }

        return head;
    }
};
