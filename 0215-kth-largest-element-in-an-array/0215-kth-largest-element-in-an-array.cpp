class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
          
         priority_queue<int,vector<int> ,greater<int>>pq;


     int ans=0;

          for(int i=0;i<nums.size();++i)
          {
              pq.push(nums[i]);



              if(pq.size()>k)
              {
                  pq.pop();

              }
              
               
              
          }
       
        // while(k--)
        // {
        //      ans= pq.top();
        //      pq.pop();
            
        // }
        
            return  pq.top();
    }
};