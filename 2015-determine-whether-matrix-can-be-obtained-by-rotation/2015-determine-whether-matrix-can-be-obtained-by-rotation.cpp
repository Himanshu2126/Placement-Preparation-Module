class Solution {
public:




   vector<vector<int>>rotate(vector<vector<int>>& mat)
    {
        int n=mat.size();
  int m=mat[0].size();

  vector<vector<int>> temp(n, vector<int>(m, 0));
  for(int  i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          temp[i][j]=mat[n-1-j][i];
      }
  }

    for(int i = 0 ; i < n ; i++)
    {
            for(int j = 0 ; j < m ; j++)
            {
                mat[i][j] = temp[i][j];
            }
    }

       return mat;
    }


    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
            
        
             for (int i = 0 ; i < 4 ; i ++)
        {
            if (mat == target)
            {
                return true ; 
            }
            rotate(mat);
        }
        return false ; 
    }




        








    
};