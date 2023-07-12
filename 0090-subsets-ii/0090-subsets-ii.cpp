class Solution {
public:


 void sumsub(int ind, vector<int>sub,vector<vector<int>>&ans,vector<int>&nums){
        ans.push_back(sub);

        for(int i=ind;i<nums.size();i++)
        {
          if(i!=ind && nums[i]==nums[i-1])continue;

          sub.push_back(nums[i]);
          sumsub(i+1,sub,ans,nums);
          sub.pop_back();
          


        }
          
        
      }
     
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
         int N=nums.size();
        vector<vector<int>>ans;
         vector<int>sub;
        int i=0;
        sort(nums.begin(),nums.end());
        
        sumsub(0,sub,ans,nums);
      
        
        return ans;




    }
};