class djset{
    public:
        vector<int>par;
        vector<int>rank;
        
        djset(int v){
            for(int i=0;i<v;i++){
                par.push_back(i);
                rank.push_back(0);
            }
        }

        int find(int a){
            if(par[a]==a)return a;

            return par[a]=find(par[a]);
        }

        void unionRank(int a,int b){
            int x=find(a);
            int y=find(b);

            if(rank[x]==rank[y]){
                rank[x]++;
                par[y]=x;
            }else if(rank[x]>rank[y]){
                par[y]=x;
            }else{
                par[x]=y;
            }
        }

};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        djset dj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] && i!=j){
                    dj.unionRank(i,j);
                }
            }
        }
       unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(dj.find(i));
        }
        return s.size();
    }
};