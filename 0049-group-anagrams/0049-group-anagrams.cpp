class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {


        vector<vector<string>>ans;
        unordered_map<string ,vector<string>>mp;


          
        for(auto str:strs)
        { 
            string s=str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);




        }   


        for(auto it:mp)
        {
            ans.push_back(it.second);
        }

        
  return ans;



    }
};