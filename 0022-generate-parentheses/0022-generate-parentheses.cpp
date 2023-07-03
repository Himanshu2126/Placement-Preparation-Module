class Solution {
public:

   void gen_parentheses(vector<string>&ans,int n,int open,int close, string cur_str)
   {

       if(cur_str.size()==n*2)
       {
           return ans.push_back(cur_str);

       }

       if(open<n)
       {
               gen_parentheses(ans,n,open+1,close,cur_str+'(');
               
       }
       if(close<open)
       {
           gen_parentheses(ans,n,open,close+1,cur_str+')');

       }

   }









    vector<string> generateParenthesis(int n) 
    {

        vector<string>ans;
        gen_parentheses(ans,n,0,0,"");
        return ans;

        
    }





};