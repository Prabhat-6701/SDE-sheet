class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>mpp;

        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            string key = s;
            sort(key.begin(), key.end());
            mpp[key].push_back(s);
        }
        for(auto &entry : mpp){
            ans.push_back(entry.second);
        }
        return ans;
    }
};