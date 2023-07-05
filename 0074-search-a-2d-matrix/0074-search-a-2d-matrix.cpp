class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
     {

         int n=matrix.size();
         int m=matrix[0].size();
         int l=0;
         int h=m*n-1;


      
             if(!matrix.size()) return false;

         while(l<=h)
         {
                int mid= l+(h-l)/2;

                int r=mid/m;
                int c=mid%m;
             if(matrix[r][c]==target)
             return true;

             else if(matrix[r][c]<target)
             {
                 l=mid+1;
             }
             else
             h=mid-1;
         }


         return false;

        //   int i=0;
        //   int j=m-1;
        //  while(i<n && j>=0)



        //   {   
        //       if(target==matrix[i][j])
        //       {
        //           return true;

        //       }
        //       else if(target>matrix[i][j])
        //       {
        //         i++;

        //       }
        //       else 
        //       j--;
             

        //    }

        //    return false;

        
    }
};