class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> hash;
        int total = 0;
        int counter = 0;
        hash[0] = 1;
        for(int i = 0 ; i < nums.size(); i++){
            total = total + nums[i];
            counter += hash[total -k];
            hash[total]++;
        }
        return counter;
    }
};