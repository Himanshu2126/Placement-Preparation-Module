class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        

        int row=matrix.size();
        int col=matrix[0].size();
        int  rowindex=0;
        

        // loop for finding target row index;
        for(int i=0;i<row;i++)
        {
            if(matrix[i][0]<=target && target<=matrix[i][col-1])
            {
                rowindex=i;
            }

        }



         for(int j=0;j<col;j++)
        {
            if(matrix[rowindex][j]==target)
            {
                return true;
            }

        }
        return false;
    }
};