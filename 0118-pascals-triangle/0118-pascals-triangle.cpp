class Solution {
public:
      vector<int>genrow(int row)
      {
          int res=1;
          vector<int>ansrow;
           ansrow.push_back(1);
           for(int i=0;i<row;i++)
           {
               res=res*(row-i);
               res=res/(i+1);

                ansrow.push_back(res);
           }
           return ansrow;
      }
   
    vector<vector<int>> generate(int numRows)
     {
        
        vector<vector<int>>ans;
          


        for(int i=0;i<numRows;i++)
        { 
            ans.push_back(genrow(i));

        }
        return ans;
    }
};