class Solution {
public:

    void Comb(int ind,vector<int>&sum,   vector<vector<int>>&ans,vector<int>& candidates, int target ,int n) {


      if(ind==candidates.size() )
       {
           if(target==0){
               ans.push_back(sum);
           }
           return;

       }

      if(candidates[ind]<=target)
      {
         sum.push_back(candidates[ind]);
          Comb(ind,sum,ans,candidates,target-candidates[ind],n);
          sum.pop_back();

      }

          Comb(ind+1,sum,ans,candidates,target,n);
    }







    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>sum;
        vector<vector<int>>ans;
        int n=candidates.size();

        int ind=0;
        
        Comb(ind,sum,ans,candidates,target,n);
        return  ans;
        
    }
};