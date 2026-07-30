class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        vector<int> ans;
        int n = asteroids.size();
        s.push(asteroids[0]);

        for (int i = 1; i < n; i++) {

            int curr = asteroids[i];
            
            bool destroyed = false;

            while (!s.empty() && curr < 0 && s.top() > 0) {
                if (s.top() < -curr) {
                    s.pop();
                    continue;
                } else if (s.top() == -curr) {
                    s.pop();
                }
                destroyed = true;
                break;
            }

            if (!destroyed) s.push(curr);
        }

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
