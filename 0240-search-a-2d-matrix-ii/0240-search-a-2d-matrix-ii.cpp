class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // int row=matrix.size();
        // int col=matrix[0].size();
        // int  rowindex=0;
        

        // // loop for finding target row index;
        // for(int i=0;i<row;i++)
        // {
        //     if(matrix[i][0]<=target && target<=matrix[i][col-1])
        //     {
        //         rowindex=i;
        //     }

        // }



        //  for(int j=0;j<col;j++)
        // {
        //     if(matrix[rowindex][j]==target)
        //     {
        //         return true;
        //     }

        // }
        // return false;




int n=matrix.size();
         int m=matrix[0].size();

          int i=0;
          int j=m-1;
         while(i<n && j>=0)
          {   
              if(target==matrix[i][j])
              {
                  return true;

              }
              else if(target>matrix[i][j])
              {
                i++;

              }
              else 
              j--;
             

           }

           return false;




    }
};