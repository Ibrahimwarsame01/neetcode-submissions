class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int best = 0;
        unordered_set<int> seen;
        while(right < s.size()){
            while(seen.contains(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            int count = right - left + 1;
            if(count > best){
                best = count;
            }
            right++;
        }
        return best;
    }
};
