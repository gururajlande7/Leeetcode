class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        if(n==0 || n==1){
            return n;
        }
        int br=0 , req=0;
        
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='('){
               br++;
            }else{
                if(br>0){
                    br--;
                }else{
                    req++;
                }
            }
        }
        return req+br;
    }
};