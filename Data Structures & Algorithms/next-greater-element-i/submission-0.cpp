class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> seen;
    stack<int> s;
    for(int i = 0; i < nums2.size(); i++){
        while(s.size() != 0 &&  nums2[i] > s.top()){
           int popped = s.top();
           s.pop();
           seen[popped] = nums2[i];   
        }
        s.push(nums2[i]);
    }
    while(!s.empty()){
        seen[s.top()] = -1;
        s.pop();
    }
    vector<int> output;
    for(int i = 0; i < nums1.size(); i++){
        output.push_back(seen[nums1[i]]);
    }
    return output;

    }
};