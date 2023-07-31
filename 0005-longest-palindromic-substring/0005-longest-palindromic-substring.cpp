class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n= s.size();
        int lp=1;
        int lpl=1;
        int st=0;
         for (int i=0;i<n;i++)
         {  
             int r=i;

             while( r<n && s[i]==s[r]) r++;
            
             int l=i-1;
             while(l>=0 && r<n && s[l]==s[r]  )
             {
                 l--;
                 r++;

             }
            
            lp=(r-1)-(l+1)+1;
         if (lpl<lp)
         {
             lpl=lp;
             st=l+1;
         }
              
         }

       return s.substr(st,lpl);


          
    }
};