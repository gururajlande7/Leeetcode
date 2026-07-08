class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> adv = {0};
        adv.insert(adv.end(), digits.begin(), digits.end());

        one(adv, adv.size() - 1);

       
        if (adv[0] == 0) {
            return vector<int>(adv.begin() + 1, adv.end());
        }
        return adv;
    }

private:
    void one(vector<int>& dig, int end) {
        if (end < 0) return;

        if (dig[end] < 9) {
            dig[end]++;
        } else {
            dig[end] = 0;
            one(dig, end - 1);
        }
    }
};