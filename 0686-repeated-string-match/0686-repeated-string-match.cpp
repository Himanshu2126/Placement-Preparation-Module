



class Solution {
public:
    int repeatedStringMatch(string a, string b) {
       
       string str=a;
       int count=1;
       int repeat=b.length()/a.length();
       for(int i=0; i<(repeat+2); i++){
           if(str.find(b)!=string::npos){
               return count;
           }else{
               str+=a;
               count++;
           }
       }
       return -1;
    }

    // int contain(string s1,string s2){
    //     if(s1.find(s2)!=string::npos) return 1;
    //     else return 0;
  //  }
};