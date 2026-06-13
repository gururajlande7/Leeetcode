class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vowel_idx;
        int si = s.length();
        for (int i = 0; i < si; i++) {
            if (s[i] == 'a' || s[i] == 'u' || s[i] == 'o' || s[i] == 'i' ||
                s[i] == 'e' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I' ||
                s[i] == 'E' || s[i] == 'A') {
                vowel_idx.push_back(i);
            }
        }
        int start = 0, end = vowel_idx.size() - 1;
        while (start <= end) {
            swap(s[vowel_idx[start]], s[vowel_idx[end]]);
            start++;
            end--;
        }
        return s;
    }
};