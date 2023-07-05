class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int maj=0;
        int count=0;
        int n=nums.size();
        int ele=0;
        for(int i=0;i<n;i++)
        {
          if(count==0)
          {
              ele=nums[i];
          }



          if(ele ==nums[i])
          {
              count++;
          }
          else
          count--;

        
        }

        return ele;

        
    }
};