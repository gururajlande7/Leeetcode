class Solution {
public:
    string removeStars(string s) {
        stack <char> st;
        
        for(int i=0; i<s.size();i++){
            if(s[i]=='*'){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(s[i]);
            }
        }

        int n=st.size();
        string str(n,'a');
        
        for(int i=0;i<n;i++){
            str[n-1-i]=st.top();
            st.pop();
        }

        return str;
    }
};