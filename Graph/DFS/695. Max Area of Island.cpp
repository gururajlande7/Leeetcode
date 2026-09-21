class Solution {
public:
    void helper(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<bool>>& vis,int num,vector<int>&vec){
        vis[i][j]=true;
        if(vec.size()==num){
            vec.push_back(1);
        }else{
            vec[num]++;
        }

        vector<int>dx={-1,0,1,0};
        vector<int>dy={0,1,0,-1};

        for(int k=0;k<4;k++){
            int nx=i+dx[k],ny=j+dy[k];
            if(nx>=0 && nx<m && ny<n && ny>=0 && !vis[nx][ny] && grid[nx][ny]){
                helper(nx,ny,m,n,grid,vis,num,vec);
            }
        }    

    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(),count=-1;
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        vector<int>vec;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] && !vis[i][j] ){
                    helper(i,j,m,n,grid,vis,++count,vec);
                }
            }
        }
        int maxSize=0;
        for(int i=0;i<vec.size();i++){
            maxSize=max(maxSize,vec[i]);
        }
        return maxSize;
    }
};