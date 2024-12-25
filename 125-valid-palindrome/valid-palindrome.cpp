class Solution {
public:
    bool isPalindrome(string s) {
        // Two pointers Approach
        int left = 0, right = s.size() - 1;
        while (left < right) {
            while (! isalnum(s[left]) && left < right) {
                left++; 
            }

            while (! isalnum(s[right]) && left < right) {
                right--;
            }

            if (tolower(s[left]) != tolower(s[right]))
                return false;
            else {
                left++; right--;
            }    
        }
        return true;
    }
};