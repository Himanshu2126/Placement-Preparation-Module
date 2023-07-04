class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
  int n=matrix.size();
  int m=matrix[0].size();

vector<vector<int>> temp(n, vector<int>(m, 0));
  for(int  i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          temp[i][j]=matrix[n-1-j][i];
      }
  }

  for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                matrix[i][j] = temp[i][j];
            }
        }


    }
};