class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alp(26, 0);
        int n = s.size();
        if (n != t.size()){
            return false;}
        for (int i = 0; i < n; i++) {
            alp[s[i]-'a']++;
        }
        for (int i = 0; i < n; i++) {
            alp[t[i]-'a']--;
            if(alp[t[i]-'a']<0){
                return false;
            }
        }
        vector<int> alph(26, 0);
    return alph==alp;
    }
};