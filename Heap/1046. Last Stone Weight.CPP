class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;

        for (int i = 0; i < stones.size(); i++) {
            q.push(stones[i]);
        }
        while (q.size() > 1) {
            int n = q.top();
            q.pop();
            int m = q.top();
            q.pop();
            if (m !=n) {
                q.push(abs(m - n));
            }
        }
        if(!q.empty()){
            return q.top();
        }

        return 0;  

    }
};