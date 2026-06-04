//2022. Convert 1D Array Into 2D Array

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> matrix(m, vector<int>(n));
        int row=0,column=0;
        if(m*n!=original.size()){
            return {};
        }
        for(int i=0;i<original.size();i++){
            if(column<n){
                matrix[row][column]=original[i];
                cout<<original[i];
                column++;
            }
            if(column==n){
                column=0;
                row++;
            }
        }
        return matrix;
}
