#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for (char c : s) {
            if (isalnum((unsigned char)c)) {
                s1 += tolower((unsigned char)c);
            }
        }
        int left = 0;
        int right = s1.size() -1;
        while ( left < right){
            if(s1[left] != s1[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
