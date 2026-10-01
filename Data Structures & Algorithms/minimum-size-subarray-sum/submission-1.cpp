class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int minlen = nums.size() + 1;
        int sum = 0;
        
        while(right < nums.size()){
           sum = sum + nums[right];
            while(sum>= target){
                sum = sum - nums[left];
                int curr = right - left + 1;
                if(curr < minlen){
                    minlen = curr;
                }
                left++;
            }
            right++;
        }
        if(minlen == nums.size() + 1){
            return 0;
        }
        return minlen;
        
    }
};