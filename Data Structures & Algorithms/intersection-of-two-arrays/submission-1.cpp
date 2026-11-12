class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        vector<int> output;
        for(int i = 0; i < nums1.size(); i++){
            seen.insert(nums1[i]);
        }
        for(int j = 0; j < nums2.size(); j++){
            if(seen.contains(nums2[j])){
                output.push_back(nums2[j]);
                seen.erase(nums2[j]);
            }
        }
        return output;
    }
};
