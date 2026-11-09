class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.empty()){return {};}
        vector<int> output (nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int write = nums.size() - 1;
        while(write != -1){
            int leftsqr = nums[left] * nums[left];
            int rightsqr = nums[right] * nums[right];
            if(leftsqr > rightsqr){
                output[write] = leftsqr;
                left++;
            }else{
            output[write] = rightsqr;
            right--;
            }
            write--;
        }
        return output;

    }
};