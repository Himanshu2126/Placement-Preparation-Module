class Solution {
public:
    vector<vector<string>> res;
    
    bool palindrome(string s){
        if(s.size()==0) return true;
        int len = s.size();
        for(int i=0; i<len; i++) if(s[i]!= s[len-1-i]) return false;
        return true;
    }

    void compute(vector<string> &tmp, string s, int index){
        if(index == s.size())  res.push_back(tmp);
        else{
            string substr1;
            for(int i=index; i<s.size(); i++){
                substr1 += s[i];
                if(substr1[0] != s[i]) continue;
                if(palindrome(substr1)){
                    // cout << "sub: " << substr1 << endl; 
                    tmp.push_back(substr1);
                    compute(tmp, s, i+1);
                    tmp.pop_back();
                }
            }    
        } 
    }

    vector<vector<string>> partition(string s) {
        vector<string> tmp;
        compute(tmp, s, 0);
        return res;
    }
};