class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2, -1);
        if (!head || !head->next || !head->next->next) return ans;

        vector<int> positions;
        int idx = 1; 
        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr->next) {
            idx++;
            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val)) {
                positions.push_back(idx);
            }
            prev = curr;
            curr = curr->next;
        }

        if (positions.size() < 2) return ans;

        int minDist = INT_MAX;
        for (int i = 1; i < positions.size(); i++) {
            minDist = min(minDist, positions[i] - positions[i - 1]);
        }

        ans[0] = minDist;
        ans[1] = positions.back() - positions.front();
        return ans;
    }
};
