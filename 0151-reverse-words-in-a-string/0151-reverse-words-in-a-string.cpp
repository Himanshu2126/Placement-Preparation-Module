class Solution {
public:
    string reverseWords(string s)
    {
        
        string temp="";
        string tp="";
        string ans="";
  
   int n=s.size();

   for(int i=0;i<n;i++)
   {
         char ch=s[i];
         

          if(ch==' ')
         {    
             
             if(temp!="")
             { 
                      
           
                 ans=temp+" "+ans;
                     temp="";
             }
      
          
         }
         else
           temp+=ch;

   }
       
        if(temp!="")
         {
              ans= temp+" "+ans;
         
         }
        ans.pop_back();
    
        return ans;
    }
};