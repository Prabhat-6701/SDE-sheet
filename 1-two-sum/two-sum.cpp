class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i = 0; i < nums.size(); i++){
            int req_value = target - nums[i];

            if(mpp.find(req_value) != mpp.end()){
                return{mpp[req_value], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};