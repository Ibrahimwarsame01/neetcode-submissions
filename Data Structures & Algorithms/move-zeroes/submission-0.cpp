class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        while(right < nums.size()){
            while(left < nums.size() && nums[left]!= 0){
                left++; 
            }
        right = left + 1;
        while(right <= nums.size() - 1 && nums[right] == 0){
            right++;
    
        }
        if(right >= nums.size()){
            break;
        }
        int temp = nums[right];
        nums[right] = nums[left];
        nums[left] = temp;
        }
        
    }
};