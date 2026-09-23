class Solution {
public:
    bool isPalindrome(int y) {
        if (y<0)
            return false;
        int original=y;
        long long reverse=0;

        while (y>0) {
            int digit=y%10;
            reverse = reverse*10+digit;
            y=y/10;
        }

        return original == reverse;
    }
};