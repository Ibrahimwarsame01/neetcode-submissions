class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0};
        int best = 0;
        int left = 0;
        for(int right = 0; right < s.size(); right++){
            count[s[right] - 'A']++;
            int maxcount = *max_element(count , count + 26);
            while(right - left + 1 - maxcount > k){
                count[s[left] - 'A']--;
                left++;
            }
            best = max(best, right - left + 1);

        }
        return best;

        
    }
};
