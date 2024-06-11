class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        // Move left index forward if not alphanumeric
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Move right index backward if not alphanumeric
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        // Compare characters
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
        
    }
};
