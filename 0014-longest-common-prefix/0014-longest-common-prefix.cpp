class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        int i;
        string res;
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[n-1];
        for(i=0;i<a.size();i++){
            if(a[i]==b[i]){
                res=res+a[i];
            }
            else{
                break;
            }
        }
        
        return res;
        
    }
};