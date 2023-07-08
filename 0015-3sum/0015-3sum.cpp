class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {


     vector<vector<int>> answer;

        sort(nums.begin(),nums.end());
        int n=nums.size();
                  set<vector<int>>ans;
                // set<vector<int>>ans;
                 for(int i=0;i<n;i++)
        { 
                
                  int start=i+1;
                  int end=n-1;
                  
                  int flag=0;
                  while(start<end)
                  
                  {
                        int  sum=nums[i]+nums[start]+nums[end];
                  
                  if(sum==0)
                    { 
                      ans.insert({nums[i],nums[start],nums[end]});
                      start++;
                      end--;

                    }
                    
                  else if(sum<0)
                  {
                      start++;
                  }
                  
                  else
                  end--;
                  
                  
                  
                  }
               
                 if(flag==1)
                 {

                  
               
                 } 
              

            
                
            
        }
        
           for(auto it:ans)
           {
                     answer.push_back(it);
        
           }
              
        
        return answer;
        
    }
};