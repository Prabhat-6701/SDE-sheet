class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        //step 1 -> count freq
        unordered_map<int,int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        //step 2 -> store the pair of freq and elements in an array
        vector<pair<int, int>> arr;
        for(auto it: freq){
            arr.push_back({it.second, it.first});
        }
        //step 3 -> sort on the basis of freq
        sort(arr.rbegin(), arr.rend());

        //step -> use loop to return top k freq elements.
        for(int i = 0; i < k; i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};