class Solution {
public:


 
         void Comb(int ind,vector<int>&sum,   vector<vector<int>>&ans,vector<int>& candidates, int target ,int n) {


      
           if(target==0){
               ans.push_back(sum);
                return;
           }
          


            for(int i=ind;i<candidates.size();i++)
            {
          if(i!=ind && candidates[i]==candidates[i-1])continue;
          
          if(candidates[i]>target) break;
          sum.push_back(candidates[i]);
          Comb(i+1,sum,ans,candidates,target-candidates[i],n);
          sum.pop_back();
          


           }

       


           

      
    }







    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<int>sum;
        vector<vector<int>>ans;
        int n=candidates.size();

        int ind=0;
        sort(candidates.begin(),candidates.end());
        Comb(ind,sum,ans,candidates,target,n);
        return  ans;
        
    
    
    





    }
};