class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;
        int i = 0; 
        int cnt = 1;

        for(int j = 1; j < n; j++){
            if(nums[j] == nums[j-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            //only accept element when count <= 2
            if(cnt <= 2){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};