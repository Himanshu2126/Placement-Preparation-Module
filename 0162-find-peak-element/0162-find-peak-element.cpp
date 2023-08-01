class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {

     int low=0;
     int high=nums.size()-1;

     if(low==high)return low;
        if(nums[low]>nums[low+1])return low;
        if(nums[high]>nums[high-1]) return high;

   low++; high++;
     
      while(low<high)
      {
          int mid =(low+high)/2;

          if((mid==0 ||nums[mid-1]<nums[mid]) && (mid==high-1||nums[mid]>nums[mid+1]))
           return mid;

            if( nums[mid-1]>=nums[mid])
              {
                  high=mid;
              }
            else
              low=mid+1;
         
          




      }
   
    return -1;

    }
};