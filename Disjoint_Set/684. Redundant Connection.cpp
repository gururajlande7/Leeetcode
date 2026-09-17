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
                par[y]=x;
                rank[x]++;
            }else if(rank[x]>rank[y]){
                par[y]=x;
            }else{
                par[x]=y;
            }
        }
};


class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        djset dj(edges.size()+1);

        for(vector<int>vec:edges){
            if(dj.find(vec[0])==dj.find(vec[1])){
                return vec;
            }
            dj.unionRank(vec[0],vec[1]);
        }

        
        return edges[edges.size()-1];
    }
};