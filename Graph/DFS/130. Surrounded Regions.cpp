class Solution {
public:
    void hash(int i,int j,int m,int n,vector<vector<char>>& board){
        board[i][j]='#';
        vector<int>dx={-1,0,1,0};
        vector<int>dy={0,1,0,-1};

        for(int k=0;k<4;k++){
            int nx=i+dx[k];
            int ny=j+dy[k];
            if(nx>=0 && nx<=m-1 && ny>=0 && ny<=n-1&& board[nx][ny]=='O'){
                hash(nx,ny,m,n,board);
            }
        }

    }

    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
           if(board[i][0]=='O'){
                hash(i,0,m,n,board);
           }
           if(board[i][n-1]=='O'){
                hash(i,n-1,m,n,board);
           }
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                hash(0,i,m,n,board);
            }
            if(board[m-1][i]=='O'){
                hash(m-1,i,m,n,board);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='#')
                    board[i][j]='O';
            }
        }
    }
};