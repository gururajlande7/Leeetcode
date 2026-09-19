class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
       int m=grid.size(),n=grid[0].size();
        queue<pair<int,int>>q;
         vector<int>dx={-1,0,1,0};
        vector<int>dy={0,1,0,-1};

        for(int i=0;i<m;i++){
           if(grid[i][0]==1){
               q.push(make_pair(i,0));              
           }
           if(grid[i][n-1]==1){
               q.push(make_pair(i,n-1));      
           }
        }

        for(int i=0;i<n;i++){
            if(grid[0][i]==1){
               q.push(make_pair(0,i));       
            }
            if(grid[m-1][i]==1){
              q.push(make_pair(m-1,i));
            }
        }

        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int x=p.first,y=p.second;
            if(grid[x][y] != 1) continue;
                grid[x][y] = 2;

            for(int k=0;k<4;k++){
                int nx=x+dx[k];
                int ny=y+dy[k];
                if(nx>=0 && nx<=m-1 && ny>=0 && ny<=n-1&& grid[nx][ny]==1){
                    q.push(make_pair(nx,ny));
                }
            }
        } 
        int count =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};