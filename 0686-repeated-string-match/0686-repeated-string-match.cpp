



class Solution {
public:
    int repeatedStringMatch(string a, string b) {
       
       string str=a;
       int count=1;
       int repeat=b.length()/a.length();
       for(int i=0; i<(repeat+2); i++)
       {
           if(str.find(b)!=string::npos)  // ye cheeck karne ke liye ki str ke ander b string h ya nhi  
                                          //ager hai     to count return kr denge  
           {
               return count;
           }

           else{
               str+=a;     // agere nhi ahi to str me a  ko ek bar add kr denge aur count increase  kar denge
               count++;
           }
       }
       return -1;
    }

  
};