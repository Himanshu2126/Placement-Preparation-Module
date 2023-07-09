class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
         int n=nums.size();

   unordered_set<int>st;
         for(int i=0 ;i<n;i++)
         {
             st.insert(nums[i]);
         }   

     int  smaller=INT_MIN;
      int  cnt;
      int x;
       int lcs=0;
          for(auto i:st)
          {  
              if(st.find(i-1)==st.end())
              {
                cnt =1;
                x=i;

              
          
              while(st.find(x+1)!=st.end())
              { 
                  cnt++;
                  x++;

              }
              
             lcs=max(lcs,cnt); 
              }
          }



   return lcs;
    }
};