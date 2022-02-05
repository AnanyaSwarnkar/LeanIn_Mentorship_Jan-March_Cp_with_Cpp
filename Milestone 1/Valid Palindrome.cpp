class Solution {
public:
   bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;            //Initialize two pointers - left and right
        while(l < r) {
            while(l < r && !isalnum(s[l])) {
                l++;
            }
            while(l < r && !isalnum(s[r])) {
                r--;
            }
            if(tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
