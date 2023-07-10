class Solution {
public:
    int trap(vector<int>& height) 
    {

        int n=height.size();
        int lmax[n];
        lmax[0]=height[0];

        for(int i=1;i<n;i++)
        {
            int temp=max(height[i],lmax[i-1]);
            lmax[i]=temp;
        }
      
       int Rmax[n];
        Rmax[n-1]=height[n-1];

        for(int i=n-2;i>=0;i--)
        {
            int temp=max(height[i],Rmax[i+1]);
            Rmax[i]=temp;
        }

     int water=0;
         
         for( int i=0;i<n;i++)
         {
             water+=min(lmax[i],Rmax[i])-height[i];
         }


   
        return water;
    }
};