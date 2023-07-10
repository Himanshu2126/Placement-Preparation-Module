class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        

        int cnt=0;
        int mco=0;

        int n=nums.size();
        for(int i=0;i<n;i++)
        {   
            if(nums[i]==0)
            {
                mco=max(mco,cnt);
                cnt=0;

            }
            else
               cnt++;
        }

          mco=max(mco,cnt);
            

        return mco;
    }
};