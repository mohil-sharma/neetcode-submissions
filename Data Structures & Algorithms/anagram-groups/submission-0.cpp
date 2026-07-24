class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp = strs;
        unordered_map<string, vector<string>> mp={};
        vector<vector<string>> ans;

        for (int i = 0; i < strs.size(); i++) {
            sort(temp[i].begin(), temp[i].end());
            mp[temp[i]].push_back(strs[i]);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
