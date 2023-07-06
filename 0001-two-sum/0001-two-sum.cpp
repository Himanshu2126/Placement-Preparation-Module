class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
      int n=nums.size();
           vector<int>ans;
            vector<int>num1;
            for(int i=0;i<n;i++)
            {
              num1.push_back(nums[i]);
            }

      sort(num1.begin(),num1.end());

      int left=0;

      int right=n-1;
     
      while(left<right)
      {
         int sum=num1[left]+num1[right];
        if(sum==target)
          {
              left=num1[left];
              right=num1[right];
              break;

          }
        else if(sum<target)
        left++;
        else
        right--;
          

      }



      for(int i=0;i<n;i++)
      {
        
        if(left==nums[i]) ans.push_back(i);

        else if(right==nums[i]) ans.push_back(i);


      }

      return ans;
        
    }
};