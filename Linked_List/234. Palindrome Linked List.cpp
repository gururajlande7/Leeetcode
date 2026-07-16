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
        ListNode * temp =head;
        vector<int>st;
        while(temp!=NULL){
            st.push_back(temp->val);
            temp=temp->next;
        }
        temp = head;
        int n=st.size();
        for(int i=0;i<st.size();i++){
            if(st[n-1-i]!=temp->val){
                return false;
            }
            temp=temp->next;
        }
        return true;
    }
};