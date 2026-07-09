//Brute force

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector <int>row;
        vector <int>col;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i=0;i<row.size();i++){
            int r=row[i];
            for(int j=0;j<m;j++){
                matrix[r][j]=0;
            }
        }
        for(int i=0;i<col.size();i++){
            int c=col[i];
            for(int j=0;j<n;j++){
                matrix[j][c]=0;
            }
        }
    }
};



//Optimal 


class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size(), col = matrix[0].size();
        bool row0 = 0, col0 = 0;
        for (int i = 0; i < col; i++)
        {
            if (matrix[0][i] == 0)
            {
                row0 = true;
                break;
            }
        }
        for (int i = 0; i < row; i++)
        {
            if (matrix[i][0] == 0)
            {
                col0 = true;
                break;
            }
        }
        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                if (matrix[0][j] == 0 or matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        }
        if(row0)
        {
            for (int i = 0; i < col; i++)
                matrix[0][i] = 0;
        }
        if(col0)
        {
            for (int i = 0; i < row; i++)
                matrix[i][0] = 0;
        }
    }
};