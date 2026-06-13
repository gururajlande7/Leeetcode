class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;

       
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            } else {
                word.push_back(c);
            }
        }
        if (!word.empty())
            words.push_back(word);

      
        string rev;
        for (int i = words.size() - 1; i >= 0; i--) {
            rev += words[i];
            if (i > 0)
                rev += " ";
        }

        return rev;
    }
};