class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;

        for(int i = 0; i < strs.size(); i++){
            vector<int>freq(26,0);

            string s = strs[i];

            for(int j = 0; j < s.size(); j++){
                freq[s[j] - 'a']++;
            }
            string key = "";
            for (int k = 0; k < 26; k++){
                key += to_string(freq[k]) + '#';
            }
            mpp[key].push_back(s);
        }
        for(auto &entry : mpp){
            ans.push_back(entry.second);
        }
        return ans;
    }
};