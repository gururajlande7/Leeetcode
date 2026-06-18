class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int curr = 0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                curr++;
        }

        int maxCount = curr;

        for (int i = k; i < n; i++) {
            if (isVowel(s[i]))
                curr++;
            if (isVowel(s[i - k]))
                curr--;
            maxCount = std::max(maxCount, curr);
        }

        return maxCount;
    }

private:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};
