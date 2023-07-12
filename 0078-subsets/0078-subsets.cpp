class Solution {
public:


 void sumsub(int i, vector<int>sub,vector<vector<int>>&ans,vector<int>&nums, int N){
          
          if(i==N)
          {
              ans.push_back(sub);
              return ;
          }
          
          
          sub.push_back(nums[i]);
          sumsub(i+1,sub,ans,nums,N);
          sub.pop_back();
          sumsub(i+1,sub,ans,nums,N);
      }
     

    vector<vector<int>> subsets(vector<int>& nums)
   {
       int N=nums.size();
        vector<vector<int>>ans;
         vector<int>sub;
        int i=0;
        
        sumsub(0,sub,ans,nums,N);
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};