class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>s;
        vector<int>left_small(n,-1);
        vector<int>right_small(n,n);

        for(int i=0; i<n; i++){
            while(!s.empty() && heights[i] <=heights[s.top()] ){
                s.pop();
            }
            if(!s.empty()){
                left_small[i]=s.top();
            }
            s.push(i);
        }
            while (!s.empty()){s.pop();}

        for(int i= n-1;i>=0;i--){
            while(!s.empty() && heights[i] <=heights[s.top()] ){
                s.pop();
            }
            if(!s.empty()){
                right_small[i]=s.top();
            }
            s.push(i);
        }

        int maxa=0;
        
        for(int i=0; i<n;i++){
            int a=(right_small[i] - left_small[i] - 1)*heights[i];
            maxa=max(maxa,a);
        }

        return maxa;
    }
};